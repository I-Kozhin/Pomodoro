#pragma once
#include <Windows.h>
namespace Pomodoro {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		
		static UInt16 Seconds = 0;
		static UInt16 Minutes = 0;
		String^ Sec;
	private: System::Windows::Forms::Button^ button2;
		   String^ Min;

	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Timer^ Timer;
	private: System::Windows::Forms::Label^ Time;



	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->Time = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(12, 163);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(275, 57);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Let`s start!";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(174, 29);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(50, 30);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"20";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(6, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(162, 25);
			this->label1->TabIndex = 2;
			this->label1->Text = L"One pomodoro is";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(216, 32);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"minutes";
			// 
			// Timer
			// 
			this->Timer->Interval = 1000;
			this->Timer->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// Time
			// 
			this->Time->AutoSize = true;
			this->Time->Font = (gcnew System::Drawing::Font(L"Roboto Bk", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Time->Location = System::Drawing::Point(100, 93);
			this->Time->Name = L"Time";
			this->Time->Size = System::Drawing::Size(103, 39);
			this->Time->TabIndex = 4;
			this->Time->Text = L"00:00";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(68, 236);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(156, 47);
			this->button2->TabIndex = 5;
			this->button2->Text = L"RESTART";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(299, 305);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->Time);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button1->Text == "Let`s start!")
	{
		if (textBox1->Text != "")
		{	
			if (textBox1->Text == "0")
			{
				Minutes = 20;
				textBox1->Text = "20";
			}
			else
			{
				Minutes = Convert::ToUInt16(textBox1->Text);
			}
			
		}
		else
		{
			Minutes = 20;
		}
		Timer->Enabled = true;
		button1->Text = "Stop";
	}
	else if (button1->Text == "Stop")
	{	
		Timer->Enabled = false;
		button1->Text = "Let`s continue!";
	}
	else if (button1->Text == "Let`s continue!")
	{	
		Timer->Enabled = true;
		button1->Text = "Stop";
	}
	

}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	

	if (Seconds == 0)
	{
		--Minutes;
		Seconds = 59;
	}
	--Seconds;

	Sec = Convert::ToString(Seconds);
	Min = Convert::ToString(Minutes);

	if ((Minutes == 0) && (Seconds == 0)) {
		Beep(440, 500);
		Timer->Enabled = false;
		Time->Text = "00:00";
		button1->Text = "Let`s start!";
	}

	Time->Text = Min + ":" + Sec;

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Timer->Enabled = false;
	button1->Text = "Let`s start!";
	Seconds = 0;
	Time->Text = "00:00";
}
};
}
