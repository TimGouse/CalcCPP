#include "MyForm.h"

#include "Windows.h"

using namespace CalcCPP;
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Form1);
	return 0;
}
void CalcCPP::Form1::Calc(int type)
{
	double a = ToDouble(txtNum1);
	double b = ToDouble(txtNum2);
	switch (type)
	{
	case PLUS:
		lblResult->Text = (a + b).ToString();
		break;
	case MINUS:
		lblResult->Text = (a - b).ToString();
		break;
	case MUL:
		lblResult->Text = (a * b).ToString();
		break;
	case DIV:
		if (b == 0) {
			MessageBox::Show("Попытка деления на 0", "Ошибка!");
			break;
		}
		lblResult->Text = (a / b).ToString();
		break;
	default:
		break;
	}

}

double CalcCPP::Form1::ToDouble(TextBox^ tbx)
{
	double rez = 0;
	try {
		rez = Convert::ToDouble(tbx->Text);
	}
	catch (...) {
		tbx->Text = "0";
		return 0;
	}
	return rez;
}

System::Void CalcCPP::Form1::btnAdd_Click(System::Object^ sender, System::EventArgs^ e)
{
	double a = ToDouble(txtNum1);
	double b = ToDouble(txtNum2);
	lblResult->Text = (a + b).ToString();
}

System::Void CalcCPP::Form1::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	double a = ToDouble(txtNum1);
	double b = ToDouble(txtNum2);
	if (b == 0) {
		MessageBox::Show("Попытка деления на 0", "Ошибка!");
	}
	else lblResult->Text = (a / b).ToString();
}

System::Void CalcCPP::Form1::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	double a = ToDouble(txtNum1);
	double b = ToDouble(txtNum2);
	lblResult->Text = (a * b).ToString();
}

System::Void CalcCPP::Form1::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	double a = ToDouble(txtNum1);
	double b = ToDouble(txtNum2);
	lblResult->Text = (a - b).ToString();
}

System::Void CalcCPP::Form1::txtNum1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
	if (!(Char::IsDigit(e->KeyChar) ||
		(e->KeyChar == (char)Keys::Back) ||
		(e->KeyChar == (char)Keys::Tab) ||
		(e->KeyChar == ',' && ((TextBox^)sender)->Text->IndexOf(',') == -1) ||
		(e->KeyChar == '-' && ((TextBox^)sender)->SelectionStart == 0)))
	e->Handled = true;
}

System::Void CalcCPP::Form1::txtNum1_Leave(System::Object^ sender, System::EventArgs^ e)
{
	if (((TextBox^)sender)->Text == "-" ||
		((TextBox^)sender)->Text == "-," ||
		((TextBox^)sender)->Text == "," ||
		((TextBox^)sender)->Text == "")
	((TextBox^)sender)->Text = "0";
	((TextBox^)sender)->Text = ToDouble(((TextBox^)sender)).ToString();
}