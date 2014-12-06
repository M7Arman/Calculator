#pragma once

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 

	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 93);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(60, 33);
			this->button1->TabIndex = 0;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(144, 93);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(60, 33);
			this->button3->TabIndex = 2;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 132);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(60, 33);
			this->button4->TabIndex = 3;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(78, 132);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(60, 33);
			this->button5->TabIndex = 4;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(144, 132);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(60, 33);
			this->button6->TabIndex = 5;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(12, 171);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(60, 33);
			this->button7->TabIndex = 6;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(78, 171);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(60, 33);
			this->button8->TabIndex = 7;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(144, 171);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(60, 33);
			this->button9->TabIndex = 8;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(12, 210);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(60, 33);
			this->button10->TabIndex = 9;
			this->button10->Text = L",";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			this->commaIsClickble = true;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(78, 210);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(60, 33);
			this->button11->TabIndex = 10;
			this->button11->Text = L"0";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(144, 210);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(60, 33);
			this->button12->TabIndex = 11;
			this->button12->Text = L"=";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Millimeter, 
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->label1->Location = System::Drawing::Point(22, 9);
			this->label1->MinimumSize = System::Drawing::Size(250, 30);
			this->label1->Name = L"label1";
			this->label1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label1->Size = System::Drawing::Size(250, 37);
			this->label1->TabIndex = 12;
			this->label1->Text = L"0";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(212, 93);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(60, 33);
			this->button13->TabIndex = 13;
			this->button13->Text = L"+";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(212, 132);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(60, 33);
			this->button14->TabIndex = 14;
			this->button14->Text = L"-";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Form1::button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(212, 171);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(60, 33);
			this->button15->TabIndex = 15;
			this->button15->Text = L"*";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Form1::button15_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(212, 210);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(60, 33);
			this->button16->TabIndex = 16;
			this->button16->Text = L"/";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Form1::button16_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(78, 93);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(60, 33);
			this->button2->TabIndex = 17;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(212, 54);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(60, 33);
			this->button17->TabIndex = 18;
			this->button17->Text = L"C";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Form1::button17_Click);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(146, 54);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(60, 33);
			this->button18->TabIndex = 19;
			this->button18->Text = L"^n";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &Form1::button18_Click);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(78, 54);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(60, 33);
			this->button19->TabIndex = 20;
			this->button19->Text = L"Soon";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &Form1::button19_Click);
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(12, 54);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(60, 33);
			this->button20->TabIndex = 21;
			this->button20->Text = L"Soon";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &Form1::button20_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 262);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: double currentNum;
private: double firstNum;
private: enum class Actions { PLUS, MINUS, MULTIPLY, BAJANAC, POWER};
private: Actions action;
private: Boolean cleanable;
private: Boolean commaIsClickble;
private: static const int CORRECT_SIZE = 10;

	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->increaseNumber("1");
		 }

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->increaseNumber("2");
		 }

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->increaseNumber("3");
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->increaseNumber("4");
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->increaseNumber("5");
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->increaseNumber("6");
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->increaseNumber("7");
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->increaseNumber("8");
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->increaseNumber("9");
		 }
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->increaseNumber("0");
		 }

// button for ',' sign
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
			if(this->commaIsClickble) {
				this->increaseNumber(",");
				this->commaIsClickble = false;
			}
		 }
		 
// increases the label1's value by the given value.
private: System::Void increaseNumber(String^ num) {
			 if(this->cleanable) {
				this->label1->Text = "0";
				this->cleanable = false;
			 }
			if (this->labelContentIsCorrect()) {
				if ("0" == this->label1->Text) {
					if("," == num) {
						this->label1->Text += num;
					} else {
						this->label1->Text = num;
					}
				 } else {
					this->label1->Text += num;
				 }
				this->currentNum = Convert::ToDouble(this->label1->Text);
			}
		 }



private: System::Double checkResultCorrectation(Double result) {
			 String^ resultStr = Convert::ToString(result);
			 // while result is incorrect
			 while(resultStr->Length > CORRECT_SIZE) {
				 //result = Convert::ToDouble(resultStr->Substring(0,CORRECT_SIZE));
				 if(Convert::ToInt16(resultStr[CORRECT_SIZE]) >= 5) {
					 if(resultStr->Contains(",")) {
						//TODO: handle the case
					 } else {
						 //TODO: handle the case
						 //result = System::Math::Pow(result, CORRECT_SIZE) - 1;
					 }
				 }
				 resultStr = Convert::ToString(result);
			 }
			 return result;
		 }

// TODO: Add comment
private: System::Boolean labelContentIsCorrect() {
			 // if label content is incorrect
			 if(this->label1->Text->Length >= CORRECT_SIZE) {
				return false;
			 }
			 return true;
		 }

// click on '=' button
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
			 double result;
			 switch ( this->action ) {
				 case Actions::PLUS:
					 result = this->firstNum + this->currentNum;
					break;
				 case Actions::MINUS:
					result = this->firstNum - this->currentNum;
					break;
				 case Actions::MULTIPLY:
					result = this->firstNum * this->currentNum;
					break;
				 case Actions::BAJANAC:
					result = this->firstNum / this->currentNum;
					break;
				 case Actions::POWER:
					result = System::Math::Pow(this->firstNum, this->currentNum);
					break;
				 default:
					//handle this case.
					 ;
			}
			 //result = this->checkResultCorrectation(result);
			 this->label1->Text = Convert::ToString(result);
			 this->currentNum = result;
			 resetSomeValue();
		 }

//TODO: rename this function.
private: System::Void resetSomeValue() {
			this->cleanable = true;
			this->commaIsClickble = true;
		 }

// click on '+' button
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
			this->firstNum = this->currentNum;
			resetSomeValue();
			this->action = Actions::PLUS;
		 }
// click on '-' button
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
			this->firstNum = this->currentNum;
			resetSomeValue();
			this->action = Actions::MINUS;
		 }
// click on '*' button
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
			this->firstNum = this->currentNum;
			resetSomeValue();
			this->action = Actions::MULTIPLY;
		 }
// click on '/' button
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
			this->firstNum = this->currentNum;
			resetSomeValue();
			this->action = Actions::BAJANAC;
		 }
 // click on 'clear' button
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
			this->label1->Text = "0";
			resetSomeValue();
			this->firstNum = 0;
			this->currentNum = 0;
		 }
 // click on '^n' button
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
			this->firstNum = this->currentNum;
			resetSomeValue();
			this->action = Actions::POWER;
		 }
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

