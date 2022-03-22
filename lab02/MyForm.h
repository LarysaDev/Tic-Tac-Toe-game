#pragma once
#using<system.dll>

namespace lab02 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace std;


	/// <summary>
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{

		static int Second = 0;
		static int Minute = 0;
		String^ Sec;
		int checkState = 0;
	private: System::Windows::Forms::TextBox^ textBox1;

		   String^ Min;

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
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ btnTic7;

	private: System::Windows::Forms::Button^ btnTic4;

	private: System::Windows::Forms::Button^ btnTic1;



	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ btnNewGame;

	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ btnTic9;

	private: System::Windows::Forms::Button^ btnTic6;

	private: System::Windows::Forms::Button^ btnTic3;
	private: System::Windows::Forms::Button^ btnTic8;


	private: System::Windows::Forms::Button^ btnTic5;

	private: System::Windows::Forms::Button^ btnTic2;
	private: System::Windows::Forms::Label^ lblPlayerO;



	private: System::Windows::Forms::Label^ lblPlayerX;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Timer^ timer1;











	protected:

	protected:

	private: System::ComponentModel::IContainer^ components;

	protected:
	protected:
	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->btnNewGame = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btnTic9 = (gcnew System::Windows::Forms::Button());
			this->btnTic1 = (gcnew System::Windows::Forms::Button());
			this->btnTic7 = (gcnew System::Windows::Forms::Button());
			this->btnTic2 = (gcnew System::Windows::Forms::Button());
			this->btnTic3 = (gcnew System::Windows::Forms::Button());
			this->btnTic4 = (gcnew System::Windows::Forms::Button());
			this->btnTic8 = (gcnew System::Windows::Forms::Button());
			this->btnTic5 = (gcnew System::Windows::Forms::Button());
			this->btnTic6 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->lblPlayerO = (gcnew System::Windows::Forms::Label());
			this->lblPlayerX = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel4->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel5->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->label5);
			this->panel1->Location = System::Drawing::Point(16, 14);
			this->panel1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(871, 79);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(317, 3);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(226, 70);
			this->label5->TabIndex = 6;
			this->label5->Text = L"GAME ";
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->textBox1);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->panel6);
			this->panel3->Controls->Add(this->panel4);
			this->panel3->Controls->Add(this->panel2);
			this->panel3->Location = System::Drawing::Point(16, 100);
			this->panel3->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(871, 405);
			this->panel3->TabIndex = 2;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(315, 343);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(70, 26);
			this->textBox1->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(47, 346);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(262, 20);
			this->label3->TabIndex = 6;
			this->label3->Text = L"You have 10 seconds per game";
			// 
			// panel6
			// 
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel6->Controls->Add(this->btnNewGame);
			this->panel6->Controls->Add(this->button11);
			this->panel6->Location = System::Drawing::Point(552, 148);
			this->panel6->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(309, 162);
			this->panel6->TabIndex = 5;
			// 
			// btnNewGame
			// 
			this->btnNewGame->Location = System::Drawing::Point(17, 86);
			this->btnNewGame->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnNewGame->Name = L"btnNewGame";
			this->btnNewGame->Size = System::Drawing::Size(269, 38);
			this->btnNewGame->TabIndex = 1;
			this->btnNewGame->Text = L"NEW GAME";
			this->btnNewGame->UseVisualStyleBackColor = true;
			this->btnNewGame->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(17, 30);
			this->button11->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(269, 38);
			this->button11->TabIndex = 0;
			this->button11->Text = L"RESET";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel4->Controls->Add(this->tableLayoutPanel1);
			this->panel4->Location = System::Drawing::Point(4, 3);
			this->panel4->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(539, 307);
			this->panel4->TabIndex = 4;
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel4_Paint);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::InsetDouble;
			this->tableLayoutPanel1->ColumnCount = 3;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				49.49495F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50.50505F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				101)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->tableLayoutPanel1->Controls->Add(this->btnTic9, 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->btnTic1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->btnTic7, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->btnTic2, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->btnTic3, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->btnTic4, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->btnTic8, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->btnTic6, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->btnTic5, 1, 1);
			this->tableLayoutPanel1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->tableLayoutPanel1->Location = System::Drawing::Point(113, 18);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 3;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 47.36842F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 52.63158F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 91)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(299, 279);
			this->tableLayoutPanel1->TabIndex = 3;
			// 
			// btnTic9
			// 
			this->btnTic9->Location = System::Drawing::Point(198, 187);
			this->btnTic9->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnTic9->Name = L"btnTic9";
			this->btnTic9->Size = System::Drawing::Size(86, 77);
			this->btnTic9->TabIndex = 10;
			this->btnTic9->UseVisualStyleBackColor = true;
			this->btnTic9->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// btnTic1
			// 
			this->btnTic1->Location = System::Drawing::Point(7, 6);
			this->btnTic1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnTic1->Name = L"btnTic1";
			this->btnTic1->Size = System::Drawing::Size(81, 77);
			this->btnTic1->TabIndex = 0;
			this->btnTic1->UseVisualStyleBackColor = true;
			this->btnTic1->Click += gcnew System::EventHandler(this, &MyForm::btnTic1_Click);
			// 
			// btnTic7
			// 
			this->btnTic7->Location = System::Drawing::Point(7, 187);
			this->btnTic7->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnTic7->Name = L"btnTic7";
			this->btnTic7->Size = System::Drawing::Size(81, 77);
			this->btnTic7->TabIndex = 4;
			this->btnTic7->UseVisualStyleBackColor = true;
			this->btnTic7->Click += gcnew System::EventHandler(this, &MyForm::btnTic7_Click);
			// 
			// btnTic2
			// 
			this->btnTic2->Location = System::Drawing::Point(102, 6);
			this->btnTic2->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnTic2->Name = L"btnTic2";
			this->btnTic2->Size = System::Drawing::Size(83, 77);
			this->btnTic2->TabIndex = 5;
			this->btnTic2->UseVisualStyleBackColor = true;
			this->btnTic2->Click += gcnew System::EventHandler(this, &MyForm::btnTic2_Click);
			// 
			// btnTic3
			// 
			this->btnTic3->Location = System::Drawing::Point(198, 6);
			this->btnTic3->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnTic3->Name = L"btnTic3";
			this->btnTic3->Size = System::Drawing::Size(86, 77);
			this->btnTic3->TabIndex = 8;
			this->btnTic3->UseVisualStyleBackColor = true;
			this->btnTic3->Click += gcnew System::EventHandler(this, &MyForm::btnTic3_Click);
			// 
			// btnTic4
			// 
			this->btnTic4->Location = System::Drawing::Point(7, 92);
			this->btnTic4->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnTic4->Name = L"btnTic4";
			this->btnTic4->Size = System::Drawing::Size(81, 77);
			this->btnTic4->TabIndex = 3;
			this->btnTic4->UseVisualStyleBackColor = true;
			this->btnTic4->Click += gcnew System::EventHandler(this, &MyForm::btnTic4_Click);
			// 
			// btnTic8
			// 
			this->btnTic8->Location = System::Drawing::Point(102, 187);
			this->btnTic8->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnTic8->Name = L"btnTic8";
			this->btnTic8->Size = System::Drawing::Size(83, 77);
			this->btnTic8->TabIndex = 7;
			this->btnTic8->UseVisualStyleBackColor = true;
			this->btnTic8->Click += gcnew System::EventHandler(this, &MyForm::btnTic8_Click);
			// 
			// btnTic5
			// 
			this->btnTic5->Location = System::Drawing::Point(102, 92);
			this->btnTic5->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnTic5->Name = L"btnTic5";
			this->btnTic5->Size = System::Drawing::Size(83, 77);
			this->btnTic5->TabIndex = 6;
			this->btnTic5->UseVisualStyleBackColor = true;
			this->btnTic5->Click += gcnew System::EventHandler(this, &MyForm::btnTic5_Click);
			// 
			// btnTic6
			// 
			this->btnTic6->Location = System::Drawing::Point(198, 92);
			this->btnTic6->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnTic6->Name = L"btnTic6";
			this->btnTic6->Size = System::Drawing::Size(86, 77);
			this->btnTic6->TabIndex = 9;
			this->btnTic6->UseVisualStyleBackColor = true;
			this->btnTic6->Click += gcnew System::EventHandler(this, &MyForm::btnTic6_Click);
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->panel5);
			this->panel2->Location = System::Drawing::Point(552, 3);
			this->panel2->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(309, 276);
			this->panel2->TabIndex = 3;
			// 
			// panel5
			// 
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel5->Controls->Add(this->lblPlayerO);
			this->panel5->Controls->Add(this->lblPlayerX);
			this->panel5->Controls->Add(this->label2);
			this->panel5->Controls->Add(this->label1);
			this->panel5->Location = System::Drawing::Point(-3, -2);
			this->panel5->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(309, 136);
			this->panel5->TabIndex = 4;
			// 
			// lblPlayerO
			// 
			this->lblPlayerO->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblPlayerO->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblPlayerO->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblPlayerO->Location = System::Drawing::Point(159, 68);
			this->lblPlayerO->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblPlayerO->Name = L"lblPlayerO";
			this->lblPlayerO->Size = System::Drawing::Size(128, 37);
			this->lblPlayerO->TabIndex = 5;
			this->lblPlayerO->Text = L"0";
			this->lblPlayerO->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblPlayerX
			// 
			this->lblPlayerX->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblPlayerX->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblPlayerX->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblPlayerX->Location = System::Drawing::Point(159, 18);
			this->lblPlayerX->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblPlayerX->Name = L"lblPlayerX";
			this->lblPlayerX->Size = System::Drawing::Size(128, 37);
			this->lblPlayerX->TabIndex = 4;
			this->lblPlayerX->Text = L"0";
			this->lblPlayerX->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblPlayerX->Click += gcnew System::EventHandler(this, &MyForm::lblPlayerX_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(34, 77);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 23);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Player O";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(34, 28);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 23);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Player X";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(905, 511);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"MyForm";
			this->Text = L"Game";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->ResumeLayout(false);

		}




#pragma endregion
		Boolean checker;
		int plusOne;
		int plusOneO;

		void enableFalse() {
			btnTic1->Enabled = false;
			btnTic2->Enabled = false;
			btnTic3->Enabled = false;
			btnTic4->Enabled = false;
			btnTic5->Enabled = false;
			btnTic6->Enabled = false;
			btnTic7->Enabled = false;
			btnTic8->Enabled = false;
			btnTic9->Enabled = false;
		}
		void score() {
			if (btnTic1->Text == "X" && btnTic2->Text == "X" && btnTic3->Text == "X") {
				btnTic1->BackColor = System::Drawing::Color::PowderBlue;
				btnTic2->BackColor = System::Drawing::Color::PowderBlue;
				btnTic3->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The Winner is Player X!", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusOne = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusOne + 1);
				enableFalse();
				this->timer1->Stop();

			}


			if (btnTic1->Text == "X" && btnTic4->Text == "X" && btnTic7->Text == "X") {
				btnTic1->BackColor = System::Drawing::Color::Pink;
				btnTic4->BackColor = System::Drawing::Color::Pink;
				btnTic7->BackColor = System::Drawing::Color::Pink;
				MessageBox::Show("The Winner is Player X!", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusOne = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusOne + 1);
				enableFalse();
				this->timer1->Stop();
			}



			if (btnTic1->Text == "X" && btnTic5->Text == "X" && btnTic9->Text == "X") {
				btnTic1->BackColor = System::Drawing::Color::PowderBlue;
				btnTic5->BackColor = System::Drawing::Color::PowderBlue;
				btnTic9->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The Winner is Player X!", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusOne = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusOne + 1);
				enableFalse();
				this->timer1->Stop();
			}

			if (btnTic4->Text == "X" && btnTic5->Text == "X" && btnTic6->Text == "X") {
				btnTic4->BackColor = System::Drawing::Color::PowderBlue;
				btnTic5->BackColor = System::Drawing::Color::PowderBlue;
				btnTic6->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The Winner is Player X!", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusOne = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusOne + 1);
				enableFalse();
				this->timer1->Stop();
			}

			if (btnTic7->Text == "X" && btnTic8->Text == "X" && btnTic9->Text == "X") {
				btnTic7->BackColor = System::Drawing::Color::PowderBlue;
				btnTic8->BackColor = System::Drawing::Color::PowderBlue;
				btnTic9->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The Winner is Player X!", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusOne = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusOne + 1);
				enableFalse();
				this->timer1->Stop();
			}

			if (btnTic3->Text == "X" && btnTic5->Text == "X" && btnTic7->Text == "X") {
				btnTic3->BackColor = System::Drawing::Color::PowderBlue;
				btnTic5->BackColor = System::Drawing::Color::PowderBlue;
				btnTic7->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The Winner is Player X!", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusOne = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusOne + 1);
				enableFalse();
				this->timer1->Stop();
			}
			//=================================================//
			if (btnTic1->Text == "O" && btnTic2->Text == "O" && btnTic3->Text == "O") {
				btnTic1->BackColor = System::Drawing::Color::Azure;
				btnTic2->BackColor = System::Drawing::Color::Azure;
				btnTic3->BackColor = System::Drawing::Color::Azure;
				MessageBox::Show("The Winner is Player O!", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusOne= int::Parse(lblPlayerO->Text);
				lblPlayerO->Text = Convert::ToString(plusOne + 1);
				enableFalse();
				this->timer1->Stop();
			}


			if (btnTic1->Text == "O" && btnTic4->Text == "O" && btnTic7->Text == "O") {
				btnTic1->BackColor = System::Drawing::Color::Azure;
				btnTic4->BackColor = System::Drawing::Color::Azure;
				btnTic7->BackColor = System::Drawing::Color::Azure;
				MessageBox::Show("The Winner is Player O!", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusOne = int::Parse(lblPlayerO->Text);
				lblPlayerO->Text = Convert::ToString(plusOne + 1);
				enableFalse();
				this->timer1->Stop();
			}



			if (btnTic1->Text == "O" && btnTic5->Text == "O" && btnTic9->Text == "O") {
				btnTic1->BackColor = System::Drawing::Color::Azure;
				btnTic5->BackColor = System::Drawing::Color::Azure;
				btnTic9->BackColor = System::Drawing::Color::Azure;
				MessageBox::Show("The Winner is Player O!", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusOne = int::Parse(lblPlayerO->Text);
				lblPlayerO->Text = Convert::ToString(plusOne + 1);
				enableFalse();
				this->timer1->Stop();
			}

			if (btnTic4->Text == "O" && btnTic5->Text == "O" && btnTic6->Text == "O") {
				btnTic4->BackColor = System::Drawing::Color::Azure;
				btnTic5->BackColor = System::Drawing::Color::Azure;
				btnTic6->BackColor = System::Drawing::Color::Azure;
				MessageBox::Show("The Winner is Player O!", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusOne = int::Parse(lblPlayerO->Text);
				lblPlayerO->Text = Convert::ToString(plusOne + 1);
				enableFalse();
				this->timer1->Stop();
			}
			if (btnTic2->Text == "O" && btnTic5->Text == "O" && btnTic7->Text == "O") {
				btnTic2->BackColor = System::Drawing::Color::Azure;
				btnTic5->BackColor = System::Drawing::Color::Azure;
				btnTic7->BackColor = System::Drawing::Color::Azure;
				MessageBox::Show("The Winner is Player O!", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusOne = int::Parse(lblPlayerO->Text);
				lblPlayerO->Text = Convert::ToString(plusOne + 1);
				enableFalse();
				this->timer1->Stop();
			}

			if (btnTic7->Text == "O" && btnTic8->Text == "O" && btnTic9->Text == "O") {
				btnTic7->BackColor = System::Drawing::Color::Azure;
				btnTic8->BackColor = System::Drawing::Color::Azure;
				btnTic9->BackColor = System::Drawing::Color::Azure;
				MessageBox::Show("The Winner is Player O!", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusOne = int::Parse(lblPlayerO->Text);
				lblPlayerO->Text = Convert::ToString(plusOne + 1);
				enableFalse();
				this->timer1->Stop();
			}

			if (btnTic3->Text == "O" && btnTic5->Text == "O" && btnTic7->Text == "O") {
				btnTic3->BackColor = System::Drawing::Color::Azure;
				btnTic5->BackColor = System::Drawing::Color::Azure;
				btnTic7->BackColor = System::Drawing::Color::Azure;
				MessageBox::Show("The Winner is Player O!", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusOne = int::Parse(lblPlayerO->Text);
				lblPlayerO->Text = Convert::ToString(plusOne + 1);
				enableFalse();
				this->timer1->Stop();
			}
			//=================================================//

		}


	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}



	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false) {
		btnTic9->Text = "X";
		checker = true;
	}
	else {
		btnTic9->Text = "O";
		checker = false;
	}
	score();
	btnTic9->Enabled = false;
}
private: System::Void btnTic1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false) {
		btnTic1->Text = "X";
		checker = true;
	}
	else {
		btnTic1->Text = "O";
		checker = false; 
	}
	score();
	btnTic1->Enabled = false;
}
private: System::Void btnTic3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false) {
		btnTic3->Text = "X";
		checker = true;
	}
	else {
		btnTic3->Text = "O";
		checker = false;
	}
	score();
	btnTic3->Enabled = false;
}
private: System::Void btnTic4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false) {
		btnTic4->Text = "X";
		checker = true;
	}
	else {
		btnTic4->Text = "O";
		checker = false;
	}
	score();
	btnTic4->Enabled = false;
}
private: System::Void btnTic2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false) {
		btnTic2->Text = "X";
		checker = true;
	}
	else {
		btnTic2->Text = "O";
		checker = false;
	}
	score();
	btnTic2->Enabled = false;
}
private: System::Void btnTic5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false) {
		btnTic5->Text = "X";
		checker = true;
	}
	else {
		btnTic5->Text = "O";
		checker = false;
	}
	score();
	btnTic5->Enabled = false;
}
private: System::Void btnTic6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false) {
		btnTic6->Text = "X";
		checker = true;
	}
	else {
		btnTic6->Text = "O";
		checker = false;
	}
	score();
	btnTic6->Enabled = false;
}
private: System::Void panel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void btnTic7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false) {
		btnTic7->Text = "X";
		checker = true;
	}
	else {
		btnTic7->Text = "O";
		checker = false;
	}
	score();
	btnTic7->Enabled = false;
}
private: System::Void btnTic8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false) {
		btnTic8->Text = "X";
		checker = true;
	}
	else {
		btnTic8->Text = "O";
		checker = false;
	}
	score();
	btnTic8->Enabled = false;
}

public: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	checkState = 1;
	if (Second != 0) {
		Second = 0;
		timer1->Start();
	}
	checkState = 1;
	btnTic1->Enabled = true;
	btnTic2->Enabled = true;
	btnTic3->Enabled = true;
	btnTic4->Enabled = true;
	btnTic5->Enabled = true;
	btnTic6->Enabled = true;
	btnTic7->Enabled = true;
	btnTic8->Enabled = true;
	btnTic9->Enabled = true;

	btnTic1->Text = "";
	btnTic2->Text = "";
	btnTic3->Text = "";
	btnTic4->Text = "";
	btnTic5->Text = "";
	btnTic6->Text = "";
	btnTic7->Text = "";
	btnTic8->Text = "";
	btnTic9->Text = "";
	btnNewGame->Enabled = true;

	btnTic1->BackColor = System::Drawing::Color::White;
	btnTic2->BackColor = System::Drawing::Color::White;
	btnTic3->BackColor = System::Drawing::Color::White;
	btnTic4->BackColor = System::Drawing::Color::White;
	btnTic5->BackColor = System::Drawing::Color::White;
	btnTic6->BackColor = System::Drawing::Color::White;
	btnTic7->BackColor = System::Drawing::Color::White;
	btnTic8->BackColor = System::Drawing::Color::White;
	btnTic9->BackColor = System::Drawing::Color::White;

}
public: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	checkState = 1;
	if (Second != 0) {
		Second = 0;
		timer1->Start();
	}
	
	checkState = 1;
	btnTic1->Enabled = true;
	btnTic2->Enabled = true;
	btnTic3->Enabled = true;
	btnTic4->Enabled = true;
	btnTic5->Enabled = true;
	btnTic6->Enabled = true;
	btnTic7->Enabled = true;
	btnTic8->Enabled = true;
	btnTic9->Enabled = true;

	btnTic1->Text = "";
	btnTic2->Text = "";
	btnTic3->Text = "";
	btnTic4->Text = "";
	btnTic5->Text = "";
	btnTic6->Text = "";
	btnTic7->Text = "";
	btnTic8->Text = "";
	btnTic9->Text = "";
	lblPlayerO->Text = "0";
	lblPlayerX->Text = "0";

	btnTic1->BackColor = System::Drawing::Color::White;
	btnTic2->BackColor = System::Drawing::Color::White;
	btnTic3->BackColor = System::Drawing::Color::White;
	btnTic4->BackColor = System::Drawing::Color::White;
	btnTic5->BackColor = System::Drawing::Color::White;
	btnTic6->BackColor = System::Drawing::Color::White;
	btnTic7->BackColor = System::Drawing::Color::White;
	btnTic8->BackColor = System::Drawing::Color::White;
	btnTic9->BackColor = System::Drawing::Color::White;

}
private: System::Void lblPlayerX_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick_2(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	
}
private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
public: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	////TIMER
	if(checkState!=0){
		Second++;

		if (Second == 10) {
			btnTic1->Enabled = true;
			btnTic2->Enabled = true;
			btnTic3->Enabled = true;
			btnTic4->Enabled = true;
			btnTic5->Enabled = true;
			btnTic6->Enabled = true;
			btnTic7->Enabled = true;
			btnTic8->Enabled = true;
			btnTic9->Enabled = true;

			btnTic1->Text = "";
			btnTic2->Text = "";
			btnTic3->Text = "";
			btnTic4->Text = "";
			btnTic5->Text = "";
			btnTic6->Text = "";
			btnTic7->Text = "";
			btnTic8->Text = "";
			btnTic9->Text = "";
			btnNewGame->Enabled = true;

			btnTic1->BackColor = System::Drawing::Color::White;
			btnTic2->BackColor = System::Drawing::Color::White;
			btnTic3->BackColor = System::Drawing::Color::White;
			btnTic4->BackColor = System::Drawing::Color::White;
			btnTic5->BackColor = System::Drawing::Color::White;
			btnTic6->BackColor = System::Drawing::Color::White;
			btnTic7->BackColor = System::Drawing::Color::White;
			btnTic8->BackColor = System::Drawing::Color::White;
			btnTic9->BackColor = System::Drawing::Color::White;
			Second = 0;
			this->timer1->Stop();
		}
		Sec = Convert::ToString(Second);
		textBox1->Text = Sec;

	}
}
private: System::Void label4_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
};
}

