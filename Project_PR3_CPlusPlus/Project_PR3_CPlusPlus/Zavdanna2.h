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
	/// Summary for Zavdanna2
	/// </summary>
	public ref class Zavdanna2 : public System::Windows::Forms::Form
	{
	public:
		Zavdanna2(void)
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
		~Zavdanna2()
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
			this->dataGridView1->Size = System::Drawing::Size(428, 166);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Column1";
			this->Column1->Name = L"Column1";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(13, 185);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(428, 44);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Start";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Zavdanna2::button1_Click);
			// 
			// Zavdanna2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(452, 239);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"Zavdanna2";
			this->Text = L"Zavdanna2";
			this->Load += gcnew System::EventHandler(this, &Zavdanna2::Zavdanna2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Zavdanna2_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		dataGridView1->ColumnCount = 1;
		dataGridView1->Columns[0]->Name = "Value";
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		int rows = 4;
		int cols = 4;
		int count = 0;
		int dobutock = 1;
		int** arr = new int* [rows];
		dataGridView1->RowCount = rows;
		dataGridView1->ColumnCount = cols;
		for (int i = 0; i < rows; i++)
		{
			arr[i] = new int[cols];
			for (int j = 0; j < cols; j++)
			{	
				dataGridView1->Rows[i]->Cells[j]->Value = arr[i][j] = rand() % 21 - 10;
			}
		}
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				if(i==j)
				dobutock *=arr[i][j];
			}
		}
		
		//Знайти добуток елементів головної діагоналі квадратної матриці
		String^ message = String::Format("Добуток головної діагоналі буде : {0:F2}", dobutock);
		MessageBox::Show(message);
	}
	};
}
