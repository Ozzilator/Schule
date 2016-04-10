#pragma once
#include "iostream"
#include "string"
namespace Rechner_mitAusnahme {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 36);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(172, 36);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(90, 208);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(42, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Zahl 1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(208, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Zahl 2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(116, 231);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Ergebnis";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(65, 74);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(73, 49);
			this->button1->TabIndex = 6;
			this->button1->Text = L"+";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(144, 74);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 49);
			this->button2->TabIndex = 7;
			this->button2->Text = L"-";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(65, 129);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 47);
			this->button3->TabIndex = 8;
			this->button3->Text = L"*";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(144, 129);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 47);
			this->button4->TabIndex = 9;
			this->button4->Text = L"/";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"Rechner_mitAusnahme";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) { // Plus	//Rechnungen wie im einfachen Rechner

		try
		{
			textBox3->Text = (Convert::ToDouble(textBox1->Text) + Convert::ToDouble(textBox2->Text)).ToString();
		}
		catch (Exception ^e)
		{
			MessageBox::Show("Mann kann nur mit Zahlen addieren.", "Fehler bei der Eingabe", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) { // Minus
		try
		{
			textBox3->Text = (Convert::ToDouble(textBox1->Text) - Convert::ToDouble(textBox2->Text)).ToString();
		}
		catch (Exception ^e)
		{
			MessageBox::Show("Mann kann nur mit Zahlen subtrahieren.", "Fehler bei der Eingabe", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		
	}

	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) { // Mal
		try
		{
			textBox3->Text = (Convert::ToDouble(textBox1->Text) * Convert::ToDouble(textBox2->Text)).ToString();
		}
		catch (Exception ^e)
		{
			MessageBox::Show("Ohne Zahlen kann man schlecht Rechnen.", "Fehler bei der Eingabe", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		
	}

	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) { // Geteilt
		try
		{
			textBox3->Text = (Convert::ToDouble(textBox1->Text) / Convert::ToDouble(textBox2->Text)).ToString();
		}
		catch (Exception ^e)
		{
			MessageBox::Show("Man kann leider nur mit Zahlen rechnen.", "Fehler bei der Eingabe", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}

		if ((Convert::ToDouble(textBox2->Text)) != 0)
		{
			textBox3->Text = (Convert::ToDouble(textBox1->Text) / Convert::ToDouble(textBox2->Text)).ToString();
		}
		else
		{
			MessageBox::Show("Ich sage dies ganz nett und ernstgemeint. DURCH NULL KANN MAN NICHT TEILEN. -Niggl", "Hast du in Mathe nicht aufgepasst ?", MessageBoxButtons::OK, MessageBoxIcon::Stop);
		}
		
	}

	};
}
