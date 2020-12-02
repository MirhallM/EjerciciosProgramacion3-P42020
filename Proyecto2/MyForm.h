#pragma once

namespace Proyecto2 {

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
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;

	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Panel^ configPanel;

	private: System::Windows::Forms::Panel^ configTitlePanel;
	private: System::Windows::Forms::Panel^ mainContentPanel;



	private: System::Windows::Forms::Panel^ elementQtyPanel;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ btnActualizar;




	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ programTitlePanel;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TabControl^ NodeTabControl;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Data::DataSet^ dataSet1;




	protected:


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
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->configTitlePanel = (gcnew System::Windows::Forms::Panel());
			this->mainContentPanel = (gcnew System::Windows::Forms::Panel());
			this->configPanel = (gcnew System::Windows::Forms::Panel());
			this->elementQtyPanel = (gcnew System::Windows::Forms::Panel());
			this->btnActualizar = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->programTitlePanel = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dataSet1 = (gcnew System::Data::DataSet());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->NodeTabControl = (gcnew System::Windows::Forms::TabControl());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1->SuspendLayout();
			this->configTitlePanel->SuspendLayout();
			this->mainContentPanel->SuspendLayout();
			this->configPanel->SuspendLayout();
			this->elementQtyPanel->SuspendLayout();
			this->programTitlePanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet1))->BeginInit();
			this->NodeTabControl->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->AutoSize = true;
			this->tableLayoutPanel1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Location = System::Drawing::Point(13, 13);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(0, 0);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel1->Controls->Add(this->configPanel);
			this->flowLayoutPanel1->Controls->Add(this->mainContentPanel);
			this->flowLayoutPanel1->Location = System::Drawing::Point(13, 90);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(829, 477);
			this->flowLayoutPanel1->TabIndex = 2;
			// 
			// configTitlePanel
			// 
			this->configTitlePanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->configTitlePanel->Controls->Add(this->label5);
			this->configTitlePanel->Location = System::Drawing::Point(-1, -1);
			this->configTitlePanel->Name = L"configTitlePanel";
			this->configTitlePanel->Size = System::Drawing::Size(360, 70);
			this->configTitlePanel->TabIndex = 0;
			// 
			// mainContentPanel
			// 
			this->mainContentPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->mainContentPanel->Controls->Add(this->NodeTabControl);
			this->mainContentPanel->Controls->Add(this->elementQtyPanel);
			this->mainContentPanel->Location = System::Drawing::Point(369, 3);
			this->mainContentPanel->Name = L"mainContentPanel";
			this->mainContentPanel->Size = System::Drawing::Size(453, 473);
			this->mainContentPanel->TabIndex = 1;
			// 
			// configPanel
			// 
			this->configPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->configPanel->Controls->Add(this->label4);
			this->configPanel->Controls->Add(this->label3);
			this->configPanel->Controls->Add(this->label2);
			this->configPanel->Controls->Add(this->textBox1);
			this->configPanel->Controls->Add(this->comboBox2);
			this->configPanel->Controls->Add(this->comboBox1);
			this->configPanel->Controls->Add(this->btnActualizar);
			this->configPanel->Controls->Add(this->configTitlePanel);
			this->configPanel->Location = System::Drawing::Point(3, 3);
			this->configPanel->Name = L"configPanel";
			this->configPanel->Size = System::Drawing::Size(360, 473);
			this->configPanel->TabIndex = 2;
			// 
			// elementQtyPanel
			// 
			this->elementQtyPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->elementQtyPanel->Controls->Add(this->label7);
			this->elementQtyPanel->Controls->Add(this->label6);
			this->elementQtyPanel->Location = System::Drawing::Point(-1, 414);
			this->elementQtyPanel->Name = L"elementQtyPanel";
			this->elementQtyPanel->Size = System::Drawing::Size(453, 58);
			this->elementQtyPanel->TabIndex = 3;
			this->elementQtyPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel4_Paint);
			// 
			// btnActualizar
			// 
			this->btnActualizar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnActualizar->Location = System::Drawing::Point(227, 266);
			this->btnActualizar->Name = L"btnActualizar";
			this->btnActualizar->Size = System::Drawing::Size(111, 31);
			this->btnActualizar->TabIndex = 4;
			this->btnActualizar->Text = L"Actualizar";
			this->btnActualizar->UseVisualStyleBackColor = true;
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(162, 118);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(176, 25);
			this->comboBox1->TabIndex = 5;
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(162, 162);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(176, 25);
			this->comboBox2->TabIndex = 6;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(162, 205);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(115, 25);
			this->textBox1->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(13, 16);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(145, 28);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Configuración";
			// 
			// programTitlePanel
			// 
			this->programTitlePanel->Controls->Add(this->label1);
			this->programTitlePanel->Location = System::Drawing::Point(12, 0);
			this->programTitlePanel->Name = L"programTitlePanel";
			this->programTitlePanel->Size = System::Drawing::Size(829, 84);
			this->programTitlePanel->TabIndex = 3;
			this->programTitlePanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel5_Paint);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(469, 38);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Simulador de Estructuras de Datos";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(15, 118);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(123, 19);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Tipo de Estructura:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(15, 162);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 19);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Operación:";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(15, 208);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(100, 19);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Valor de Nodo:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(21, 21);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(153, 19);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Cantidad de elementos:";
			// 
			// dataSet1
			// 
			this->dataSet1->DataSetName = L"NewDataSet";
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(437, 376);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabPage1
			// 
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(437, 376);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"tabPage1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// NodeTabControl
			// 
			this->NodeTabControl->Controls->Add(this->tabPage1);
			this->NodeTabControl->Controls->Add(this->tabPage2);
			this->NodeTabControl->Location = System::Drawing::Point(3, 3);
			this->NodeTabControl->Name = L"NodeTabControl";
			this->NodeTabControl->SelectedIndex = 0;
			this->NodeTabControl->Size = System::Drawing::Size(445, 405);
			this->NodeTabControl->TabIndex = 4;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(180, 23);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(198, 17);
			this->label7->TabIndex = 1;
			this->label7->Text = L"TODO->CantidadElementos();";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(854, 579);
			this->Controls->Add(this->programTitlePanel);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Proyecto Parcial 2";
			this->flowLayoutPanel1->ResumeLayout(false);
			this->configTitlePanel->ResumeLayout(false);
			this->configTitlePanel->PerformLayout();
			this->mainContentPanel->ResumeLayout(false);
			this->configPanel->ResumeLayout(false);
			this->configPanel->PerformLayout();
			this->elementQtyPanel->ResumeLayout(false);
			this->elementQtyPanel->PerformLayout();
			this->programTitlePanel->ResumeLayout(false);
			this->programTitlePanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet1))->EndInit();
			this->NodeTabControl->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void webBrowser1_DocumentCompleted(System::Object^ sender, System::Windows::Forms::WebBrowserDocumentCompletedEventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void panel5_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
