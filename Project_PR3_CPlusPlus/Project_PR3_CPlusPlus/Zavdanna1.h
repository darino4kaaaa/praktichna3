#pragma once
#include<string>
#include<cstdlib>
#include<ctime>
namespace ProjectPR3CPlusPlus {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Zavdanna1
	/// </summary>
	public ref class Zavdanna1 : public System::Windows::Forms::Form
	{
	public:
		Zavdanna1(void)
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
		~Zavdanna1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::Button^ button1;

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Column1 });
			this->dataGridView1->Location = System::Drawing::Point(13, 13);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(240, 150);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Column1";
			this->Column1->Name = L"Column1";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(13, 170);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(240, 55);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Start";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Zavdanna1::button1_Click);
			// 
			// Zavdanna1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(289, 254);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"Zavdanna1";
			this->Text = L"Zavdanna1";
			this->Load += gcnew System::EventHandler(this, &Zavdanna1::Zavdanna1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		int size = 10;
		int* arr = new int[size];
		int count = 0;
		int sum = 0;
		for (int i = 0; i < size; i++)
		{
			arr[i] = rand() % 21 - 10;
		}
		for (int i = 0; i < size; i++)
		{
			dataGridView1->Rows->Add(arr[i], "");
			if (arr[i]<0)
			{
				count++;
				sum += arr[i];
			}
		}
		double average = 0;
		if (count>0)
		{
			average = static_cast<double>(sum) / count;
		}
		String^ message = String::Format("Avarage of negative numbers: {0:F2}", average);
		MessageBox::Show(message);

	}
	private: System::Void Zavdanna1_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		dataGridView1->ColumnCount = 1;
		dataGridView1->Columns[0]->Name = "Value";
	}
};
}
