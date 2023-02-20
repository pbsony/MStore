#pragma once

#include "MyForm.h"
#include <string>
#include "DLL.h"
#include <algorithm>
#include "Store.h"
#include <msclr\marshal_cppstd.h>
using namespace msclr::interop;

namespace Interface {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		Store* store;

	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//

			// Создаем объект класса магазин и загружаем данные из файла
			store = new Store();
			store->readFromFile("shop.db");

		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button7;
	protected:
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;



	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label12;













	protected:


	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(198, 243);
			this->button7->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(231, 19);
			this->button7->TabIndex = 37;
			this->button7->Text = L"Расчитать действующую скидку";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(717, 397);
			this->button6->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(116, 19);
			this->button6->TabIndex = 36;
			this->button6->Text = L"Показать\r\n";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(198, 353);
			this->button5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(56, 19);
			this->button5->TabIndex = 35;
			this->button5->Text = L"Найти";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(162, 353);
			this->textBox3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(30, 20);
			this->textBox3->TabIndex = 34;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(26, 353);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(136, 13);
			this->label7->TabIndex = 33;
			this->label7->Text = L"Устройства с рейтингом:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(363, 322);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(23, 13);
			this->label6->TabIndex = 32;
			this->label6->Text = L"шт.";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(273, 317);
			this->textBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(76, 20);
			this->textBox2->TabIndex = 31;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(365, 284);
			this->button4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(56, 19);
			this->button4->TabIndex = 30;
			this->button4->Text = L"Найти\r\n";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(18, 284);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(178, 13);
			this->label5->TabIndex = 29;
			this->label5->Text = L"Кол-во устройств производителя:\r\n";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(198, 284);
			this->textBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(151, 20);
			this->textBox1->TabIndex = 28;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Location = System::Drawing::Point(462, 284);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox1->Size = System::Drawing::Size(150, 101);
			this->groupBox1->TabIndex = 27;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Сортировка:";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 67);
			this->button3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(112, 19);
			this->button3->TabIndex = 2;
			this->button3->Text = L"По рейтингу\r\n";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 42);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(112, 19);
			this->button2->TabIndex = 1;
			this->button2->Text = L"По производителю";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 17);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 19);
			this->button1->TabIndex = 0;
			this->button1->Text = L"По цене";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(725, -11);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(86, 13);
			this->label4->TabIndex = 26;
			this->label4->Text = L"Полный список";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(482, -11);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(49, 13);
			this->label3->TabIndex = 24;
			this->label3->Text = L"Флейты\r\n";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(256, -11);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 13);
			this->label2->TabIndex = 23;
			this->label2->Text = L"Синтезаторы";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(78, -11);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 13);
			this->label1->TabIndex = 22;
			this->label1->Text = L"Гитары";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(91, 5);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(44, 13);
			this->label8->TabIndex = 38;
			this->label8->Text = L"Гитары";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(274, 5);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(74, 13);
			this->label9->TabIndex = 39;
			this->label9->Text = L"Синтезаторы";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(482, 5);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(49, 13);
			this->label10->TabIndex = 40;
			this->label10->Text = L"Флейты";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(725, 7);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(86, 13);
			this->label11->TabIndex = 41;
			this->label11->Text = L"Полный список";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(654, 36);
			this->textBox4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox4->Size = System::Drawing::Size(227, 310);
			this->textBox4->TabIndex = 42;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(20, 36);
			this->textBox5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox5->Size = System::Drawing::Size(164, 186);
			this->textBox5->TabIndex = 43;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(219, 36);
			this->textBox6->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox6->Size = System::Drawing::Size(158, 186);
			this->textBox6->TabIndex = 44;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(429, 36);
			this->textBox7->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox7->Size = System::Drawing::Size(158, 186);
			this->textBox7->TabIndex = 45;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(694, 366);
			this->button8->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(148, 19);
			this->button8->TabIndex = 46;
			this->button8->Text = L"Считать из файла";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(454, 244);
			this->textBox8->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(76, 19);
			this->textBox8->TabIndex = 47;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(20, 377);
			this->textBox9->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox9->Size = System::Drawing::Size(289, 142);
			this->textBox9->TabIndex = 48;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(533, 249);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(27, 13);
			this->label12->TabIndex = 49;
			this->label12->Text = L"руб.";
			this->label12->Click += gcnew System::EventHandler(this, &MyForm::label12_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(892, 622);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) { 
	if (textBox8->Text != "") {
		int discount = std::stoi(marshal_as<std::string>(textBox8->Text));
		store->applyDiscount(Item::Type::Guitar, discount);
		store->applyDiscount(Item::Type::Flute, discount);
		store->applyDiscount(Item::Type::Synth, discount);
		UpdateText();
	}
}
private: System::Void listBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
	   void UpdateText() 
	   {
		   textBox4->Text = "";
		   std::vector<std::string>* pointer = store->GetStoreForm();
		   for (std::vector<std::string>::iterator it = pointer->begin(); it != pointer->end(); ++it)
		   {
			   textBox4->Text += gcnew String((*it).c_str()) + Environment::NewLine;
		   }
		   delete pointer;
		   textBox5->Text = "";
		   pointer = store->GetGuitarsForm();
		   for (std::vector<std::string>::iterator it = pointer->begin(); it != pointer->end(); ++it)
		   {
			   textBox5->Text += gcnew String((*it).c_str()) + Environment::NewLine;
		   }
		   delete pointer;
		   textBox6->Text = "";
		   pointer = store->GetSynthsForm();
		   for (std::vector<std::string>::iterator it = pointer->begin(); it != pointer->end(); ++it)
		   {
			   textBox6->Text += gcnew String((*it).c_str()) + Environment::NewLine;
		   }
		   delete pointer;
		   textBox7->Text = "";
		   pointer = store->GetFlutesForm();
		   for (std::vector<std::string>::iterator it = pointer->begin(); it != pointer->end(); ++it)
		   {
			   textBox7->Text += gcnew String((*it).c_str()) + Environment::NewLine;
		   }
		   delete pointer;
	   }
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) { 

	UpdateText();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	store->sortByPrice();
	UpdateText();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	store->sortByName();
	UpdateText();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	store->sortByRating();
	UpdateText();
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	store->readFromFile("shopdb.txt");
}
/*private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text != "") {
		textBox2->Text = "";
		textBox2->Text = gcnew String((std::to_string(store->countByCompany(marshal_as<std::string>(textBox1->Text))).c_str()));
	}

		/*private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
				std::string mystr;
				mystr = marshal_as<std::string>(textBox1->Text);
				if (textBox1->Text != "") {
				textBox2->Text = "";
				std::transform(mystr.begin(), mystr.end(), mystr.begin(), toupper);
				size_t index = 0;
				while ((index = mystr.find(' ')) != std::string::npos)
				mystr.erase(index, 1);
				textBox2->Text = gcnew String((std::to_string(store->countByCompany(marshal_as<std::string>(mystr))).c_str()));
			}






}*/
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string mystr;
		mystr = marshal_as<std::string>(textBox1->Text);
		if (textBox1->Text != "") {
			textBox2->Text = "";
			std::transform(mystr.begin(), mystr.end(), mystr.begin(), toupper);
			size_t index = 0;
			while ((index = mystr.find(' ')) != std::string::npos)
				mystr.erase(index, 1);
			textBox2->Text = gcnew String((std::to_string(store->countByCompany(mystr)).c_str()));
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox3->Text != "") {
		textBox9->Text = "";
		int rating = std::stoi(marshal_as<std::string>(textBox3->Text));
		std::vector<std::string>* pointer = store->getByRating(rating);
		for (std::vector<std::string>::iterator it = pointer->begin(); it != pointer->end(); ++it)
		{
			textBox9->Text += gcnew String((*it).c_str()) + Environment::NewLine;
		}
		delete pointer;
	}
}
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
