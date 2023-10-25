#pragma once

namespace CalcCPP {
    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

#define PLUS 0
#define MINUS 1
#define MUL 2
#define DIV 3

    public ref class Form1 : public System::Windows::Forms::Form
    {
    public:
        Form1(void)
        {
            InitializeComponent();

        }

    protected:
        ~Form1()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Button^ btnAdd;
    private: System::Windows::Forms::TextBox^ txtNum1;
    private: System::Windows::Forms::TextBox^ txtNum2;
    private: System::Windows::Forms::Label^ lblResult;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Button^ button3;

    protected:

    private:
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->btnAdd = (gcnew System::Windows::Forms::Button());
            this->txtNum1 = (gcnew System::Windows::Forms::TextBox());
            this->txtNum2 = (gcnew System::Windows::Forms::TextBox());
            this->lblResult = (gcnew System::Windows::Forms::Label());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // btnAdd
            // 
            this->btnAdd->Location = System::Drawing::Point(324, 232);
            this->btnAdd->Margin = System::Windows::Forms::Padding(6);
            this->btnAdd->Name = L"btnAdd";
            this->btnAdd->Size = System::Drawing::Size(150, 44);
            this->btnAdd->TabIndex = 0;
            this->btnAdd->Text = L"+";
            this->btnAdd->UseVisualStyleBackColor = true;
            this->btnAdd->Click += gcnew System::EventHandler(this, &Form1::btnAdd_Click);
            // 
            // txtNum1
            // 
            this->txtNum1->Location = System::Drawing::Point(64, 96);
            this->txtNum1->Margin = System::Windows::Forms::Padding(6);
            this->txtNum1->Name = L"txtNum1";
            this->txtNum1->Size = System::Drawing::Size(196, 31);
            this->txtNum1->TabIndex = 1;
            this->txtNum1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::txtNum1_KeyPress);
            this->txtNum1->Leave += gcnew System::EventHandler(this, &Form1::txtNum1_Leave);
            // 
            // txtNum2
            // 
            this->txtNum2->Location = System::Drawing::Point(348, 96);
            this->txtNum2->Margin = System::Windows::Forms::Padding(6);
            this->txtNum2->Name = L"txtNum2";
            this->txtNum2->Size = System::Drawing::Size(196, 31);
            this->txtNum2->TabIndex = 2;
            this->txtNum2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::txtNum1_KeyPress);
            this->txtNum2->Leave += gcnew System::EventHandler(this, &Form1::txtNum1_Leave);
            // 
            // lblResult
            // 
            this->lblResult->AutoSize = true;
            this->lblResult->Location = System::Drawing::Point(270, 175);
            this->lblResult->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
            this->lblResult->Name = L"lblResult";
            this->lblResult->Size = System::Drawing::Size(0, 25);
            this->lblResult->TabIndex = 3;
            // 
            // button1
            // 
            this->button1->Location = System::Drawing::Point(169, 282);
            this->button1->Margin = System::Windows::Forms::Padding(6);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(150, 44);
            this->button1->TabIndex = 4;
            this->button1->Text = L"\\";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
            // 
            // button2
            // 
            this->button2->Location = System::Drawing::Point(15, 232);
            this->button2->Margin = System::Windows::Forms::Padding(6);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(150, 44);
            this->button2->TabIndex = 5;
            this->button2->Text = L"*";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
            // 
            // button3
            // 
            this->button3->Location = System::Drawing::Point(476, 282);
            this->button3->Margin = System::Windows::Forms::Padding(6);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(150, 44);
            this->button3->TabIndex = 6;
            this->button3->Text = L"-";
            this->button3->UseVisualStyleBackColor = true;
            this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
            // 
            // Form1
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(668, 396);
            this->Controls->Add(this->button3);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->lblResult);
            this->Controls->Add(this->txtNum2);
            this->Controls->Add(this->txtNum1);
            this->Controls->Add(this->btnAdd);
            this->Margin = System::Windows::Forms::Padding(6);
            this->Name = L"Form1";
            this->Text = L"CalcCPP";
            this->ResumeLayout(false);
            this->PerformLayout();
         
        }
#pragma endregion
      
   private:
       void Calc(int type);
       double ToDouble(TextBox^ tbx);
       System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e);
       System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
       System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
       System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
       System::Void txtNum1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);
       System::Void txtNum1_Leave(System::Object^ sender, System::EventArgs^ e);

};
}

