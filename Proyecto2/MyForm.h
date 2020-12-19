#pragma once

#include "Simulador.h"
#include <vector>

Simulador simulador;

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
			ComboBoxEstructuras->SelectedIndex = 0;
			ComboBoxOperaciones->SelectedIndex = 0;
			labelCantidad->Text = "0";
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
	private: System::Windows::Forms::TextBox^ ValorNodo;
	private: System::Windows::Forms::ComboBox^ ComboBoxOperaciones;



	private: System::Windows::Forms::ComboBox^ ComboBoxEstructuras;

	private: System::Windows::Forms::Button^ btnActualizar;




	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ programTitlePanel;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ labelCantidad;
	private: System::Windows::Forms::Panel^ graphicsPanel;





	private: System::Windows::Forms::TextBox^ PosicionTextBox;
	private: System::Windows::Forms::Label^ PosicionLabel;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label7;





	private: System::ComponentModel::IContainer^ components;





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
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->configPanel = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->PosicionTextBox = (gcnew System::Windows::Forms::TextBox());
			this->PosicionLabel = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->ValorNodo = (gcnew System::Windows::Forms::TextBox());
			this->ComboBoxOperaciones = (gcnew System::Windows::Forms::ComboBox());
			this->ComboBoxEstructuras = (gcnew System::Windows::Forms::ComboBox());
			this->btnActualizar = (gcnew System::Windows::Forms::Button());
			this->configTitlePanel = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->mainContentPanel = (gcnew System::Windows::Forms::Panel());
			this->graphicsPanel = (gcnew System::Windows::Forms::Panel());
			this->elementQtyPanel = (gcnew System::Windows::Forms::Panel());
			this->labelCantidad = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->programTitlePanel = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1->SuspendLayout();
			this->configPanel->SuspendLayout();
			this->configTitlePanel->SuspendLayout();
			this->mainContentPanel->SuspendLayout();
			this->elementQtyPanel->SuspendLayout();
			this->programTitlePanel->SuspendLayout();
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
			this->tableLayoutPanel1->Location = System::Drawing::Point(10, 11);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(2);
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
			this->flowLayoutPanel1->Location = System::Drawing::Point(10, 73);
			this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(2);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(961, 388);
			this->flowLayoutPanel1->TabIndex = 2;
			// 
			// configPanel
			// 
			this->configPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->configPanel->Controls->Add(this->label7);
			this->configPanel->Controls->Add(this->button1);
			this->configPanel->Controls->Add(this->PosicionTextBox);
			this->configPanel->Controls->Add(this->PosicionLabel);
			this->configPanel->Controls->Add(this->label4);
			this->configPanel->Controls->Add(this->label3);
			this->configPanel->Controls->Add(this->label2);
			this->configPanel->Controls->Add(this->ValorNodo);
			this->configPanel->Controls->Add(this->ComboBoxOperaciones);
			this->configPanel->Controls->Add(this->ComboBoxEstructuras);
			this->configPanel->Controls->Add(this->btnActualizar);
			this->configPanel->Controls->Add(this->configTitlePanel);
			this->configPanel->Location = System::Drawing::Point(2, 2);
			this->configPanel->Margin = System::Windows::Forms::Padding(2);
			this->configPanel->Name = L"configPanel";
			this->configPanel->Size = System::Drawing::Size(270, 385);
			this->configPanel->TabIndex = 2;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(17, 279);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 13);
			this->label7->TabIndex = 14;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(16, 242);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(113, 23);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Vaciar Estrutura";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// PosicionTextBox
			// 
			this->PosicionTextBox->Location = System::Drawing::Point(122, 202);
			this->PosicionTextBox->Name = L"PosicionTextBox";
			this->PosicionTextBox->Size = System::Drawing::Size(87, 20);
			this->PosicionTextBox->TabIndex = 12;
			this->PosicionTextBox->Visible = false;
			this->PosicionTextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::PosicionTextBox_TextChanged);
			// 
			// PosicionLabel
			// 
			this->PosicionLabel->AutoSize = true;
			this->PosicionLabel->Location = System::Drawing::Point(11, 205);
			this->PosicionLabel->Name = L"PosicionLabel";
			this->PosicionLabel->Size = System::Drawing::Size(50, 13);
			this->PosicionLabel->TabIndex = 11;
			this->PosicionLabel->Text = L"Posicion:";
			this->PosicionLabel->Visible = false;
			this->PosicionLabel->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(11, 169);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(84, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Valor de Nodo:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(11, 132);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Operación:";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(11, 96);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(104, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Tipo de Estructura:";
			// 
			// ValorNodo
			// 
			this->ValorNodo->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ValorNodo->Location = System::Drawing::Point(122, 167);
			this->ValorNodo->Margin = System::Windows::Forms::Padding(2);
			this->ValorNodo->Name = L"ValorNodo";
			this->ValorNodo->Size = System::Drawing::Size(87, 21);
			this->ValorNodo->TabIndex = 7;
			this->ValorNodo->TextChanged += gcnew System::EventHandler(this, &MyForm::ValorNodo_TextChanged);
			// 
			// ComboBoxOperaciones
			// 
			this->ComboBoxOperaciones->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->ComboBoxOperaciones->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ComboBoxOperaciones->FormattingEnabled = true;
			this->ComboBoxOperaciones->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Agregar Al Inicio", L"Agregar Al Final",
					L"Agregar En Posicion", L"Eliminar Por Valor", L"Eliminar Por Posicion", L"Busqueda", L"Mostrar"
			});
			this->ComboBoxOperaciones->Location = System::Drawing::Point(122, 132);
			this->ComboBoxOperaciones->Margin = System::Windows::Forms::Padding(2);
			this->ComboBoxOperaciones->Name = L"ComboBoxOperaciones";
			this->ComboBoxOperaciones->Size = System::Drawing::Size(133, 20);
			this->ComboBoxOperaciones->TabIndex = 6;
			this->ComboBoxOperaciones->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::ComboBoxOperaciones_SelectedIndexChanged);
			// 
			// ComboBoxEstructuras
			// 
			this->ComboBoxEstructuras->CausesValidation = false;
			this->ComboBoxEstructuras->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->ComboBoxEstructuras->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ComboBoxEstructuras->FormattingEnabled = true;
			this->ComboBoxEstructuras->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Vector", L"Lista Simple", L"Lista Doble",
					L"Lista Circular"
			});
			this->ComboBoxEstructuras->Location = System::Drawing::Point(122, 96);
			this->ComboBoxEstructuras->Margin = System::Windows::Forms::Padding(2);
			this->ComboBoxEstructuras->Name = L"ComboBoxEstructuras";
			this->ComboBoxEstructuras->Size = System::Drawing::Size(133, 21);
			this->ComboBoxEstructuras->TabIndex = 5;
			this->ComboBoxEstructuras->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::ComboBoxEstructuras_SelectedIndexChanged);
			// 
			// btnActualizar
			// 
			this->btnActualizar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnActualizar->Location = System::Drawing::Point(172, 240);
			this->btnActualizar->Margin = System::Windows::Forms::Padding(2);
			this->btnActualizar->Name = L"btnActualizar";
			this->btnActualizar->Size = System::Drawing::Size(83, 25);
			this->btnActualizar->TabIndex = 4;
			this->btnActualizar->Text = L"Actualizar";
			this->btnActualizar->UseVisualStyleBackColor = true;
			this->btnActualizar->Click += gcnew System::EventHandler(this, &MyForm::btnActualizar_Click);
			// 
			// configTitlePanel
			// 
			this->configTitlePanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->configTitlePanel->Controls->Add(this->label5);
			this->configTitlePanel->Location = System::Drawing::Point(-1, -1);
			this->configTitlePanel->Margin = System::Windows::Forms::Padding(2);
			this->configTitlePanel->Name = L"configTitlePanel";
			this->configTitlePanel->Size = System::Drawing::Size(270, 57);
			this->configTitlePanel->TabIndex = 0;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(10, 13);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(119, 21);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Configuración";
			// 
			// mainContentPanel
			// 
			this->mainContentPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->mainContentPanel->Controls->Add(this->graphicsPanel);
			this->mainContentPanel->Controls->Add(this->elementQtyPanel);
			this->mainContentPanel->Location = System::Drawing::Point(276, 2);
			this->mainContentPanel->Margin = System::Windows::Forms::Padding(2);
			this->mainContentPanel->Name = L"mainContentPanel";
			this->mainContentPanel->Size = System::Drawing::Size(679, 385);
			this->mainContentPanel->TabIndex = 1;
			this->mainContentPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::mainContentPanel_Paint);
			// 
			// graphicsPanel
			// 
			this->graphicsPanel->AutoScroll = true;
			this->graphicsPanel->Location = System::Drawing::Point(0, -1);
			this->graphicsPanel->Name = L"graphicsPanel";
			this->graphicsPanel->Size = System::Drawing::Size(679, 332);
			this->graphicsPanel->TabIndex = 4;
			// 
			// elementQtyPanel
			// 
			this->elementQtyPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->elementQtyPanel->Controls->Add(this->labelCantidad);
			this->elementQtyPanel->Controls->Add(this->label6);
			this->elementQtyPanel->Location = System::Drawing::Point(0, 336);
			this->elementQtyPanel->Margin = System::Windows::Forms::Padding(2);
			this->elementQtyPanel->Name = L"elementQtyPanel";
			this->elementQtyPanel->Size = System::Drawing::Size(679, 48);
			this->elementQtyPanel->TabIndex = 3;
			this->elementQtyPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel4_Paint);
			// 
			// labelCantidad
			// 
			this->labelCantidad->AutoSize = true;
			this->labelCantidad->Location = System::Drawing::Point(135, 15);
			this->labelCantidad->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelCantidad->Name = L"labelCantidad";
			this->labelCantidad->Size = System::Drawing::Size(0, 13);
			this->labelCantidad->TabIndex = 1;
			this->labelCantidad->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(2, 15);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(129, 13);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Cantidad de elementos:";
			// 
			// programTitlePanel
			// 
			this->programTitlePanel->Controls->Add(this->label1);
			this->programTitlePanel->Location = System::Drawing::Point(9, 0);
			this->programTitlePanel->Margin = System::Windows::Forms::Padding(2);
			this->programTitlePanel->Name = L"programTitlePanel";
			this->programTitlePanel->Size = System::Drawing::Size(962, 68);
			this->programTitlePanel->TabIndex = 3;
			this->programTitlePanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel5_Paint);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(2, 21);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(371, 30);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Simulador de Estructuras de Datos";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(980, 470);
			this->Controls->Add(this->programTitlePanel);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Proyecto Parcial 2";
			this->flowLayoutPanel1->ResumeLayout(false);
			this->configPanel->ResumeLayout(false);
			this->configPanel->PerformLayout();
			this->configTitlePanel->ResumeLayout(false);
			this->configTitlePanel->PerformLayout();
			this->mainContentPanel->ResumeLayout(false);
			this->elementQtyPanel->ResumeLayout(false);
			this->elementQtyPanel->PerformLayout();
			this->programTitlePanel->ResumeLayout(false);
			this->programTitlePanel->PerformLayout();
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
		private: System::Void mainContentPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		}
		private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
		}
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   
private: System::Void btnActualizar_Click(System::Object^ sender, System::EventArgs^ e) {
	
	Graphics^ graphics = graphicsPanel->CreateGraphics();
	graphicsPanel->Controls->Clear();
	label7->Text = "";

	Convert^ converter;
	int nuevoValor;

	if (ValorNodo->Text != "")
	{
		nuevoValor = converter->ToInt32(ValorNodo->Text);
	}

	int pos = -1;

	if (PosicionTextBox->Text != "")
	{
		pos = converter->ToInt32(PosicionTextBox->Text);
	}

	Operaciones(nuevoValor, pos);


	int opcion = this->ComboBoxEstructuras->SelectedIndex;
	
	mostrar(opcion);

	labelCantidad->Text = simulador.getSize().ToString();
	PosicionTextBox->Text = "";
	ValorNodo->Text = "";
}
void mostrar(int opcion)
{
	switch (opcion)
	{
	case 0:
		addVectors();
		break;
	case 1:
		AddSimpleList();
		break;
	case 2:
		AddDobleList();
		break;
	case 3:
		AddListaCircular();
		break;
	}
}
private: void Operaciones(int nuevoValor, int pos)
{
	int buscar;
	switch (this->ComboBoxOperaciones->SelectedIndex)
	{
	case 0:
		if (ValorNodo->Text != "")
		{
			simulador.insertarInicio(nuevoValor);
		}
		break;
	case 1:
		if (ValorNodo->Text != "")
		{
			simulador.agregarFinal(nuevoValor);
		}
		break;
	case 2:
		if (ValorNodo->Text != "" && PosicionTextBox->Text != "")
		{
			simulador.insertarPosicion(pos, nuevoValor);
		}
		break;
	case 3:
		if (ValorNodo->Text != "")
		{
			simulador.eliminarPorValor(nuevoValor);
		}
		break;
	case 4:
		if (PosicionTextBox->Text != "")
		{
			simulador.eliminarPorPosicion(pos);
		}
		break;
	case 5:
		if (ValorNodo->Text != "")
		{
			buscar = simulador.busqueda(nuevoValor);
			if (buscar != -1)
			{
				label7->Text = "Se encontró este valor en la posicion " + buscar + "!";
			}
			else
			{
				label7->Text = "No se encontró el valor " + nuevoValor + " en la posicion!";
			}
		}
		break;
	case 6:
		mostrar(this->ComboBoxEstructuras->SelectedIndex);
		break;
	}
}
private: System::Void ComboBoxEstructuras_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void ComboBoxOperaciones_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
if (this->ComboBoxOperaciones->SelectedIndex == 2 || this->ComboBoxOperaciones->SelectedIndex == 4)
{
	this->PosicionLabel->Visible = true;
	this->PosicionTextBox->Visible = true;
}
else
{
	this->PosicionLabel->Visible = false;
	this->PosicionTextBox->Visible = false;
}
}

private: Void addVectors()
{
	float PBHEIGHT = graphicsPanel->Height / 2;

	for (int i = 0; i < simulador.getSize(); i++)
	{
		PictureBox^ pb = gcnew PictureBox();
		graphicsPanel->Controls->Add(pb);
		Image^ vectorIMG = Image::FromFile("NodoVector.png");
		pb->Image = vectorIMG;
		pb->Location = Point(0 + 106*i, PBHEIGHT);
		pb->Width = vectorIMG->Size.Width;
		pb->Height = vectorIMG->Size.Height;


		//Se crea sobre la picture box, ya es dinamico
		Label^ label = gcnew Label();
		label->Parent = pb;
		label->BackColor = System::Drawing::Color::Transparent;
		label->AutoSize = true;
		label->Location = Point(0, 0);
		label->Text = simulador.getPos(i).ToString();
		if (label->Text->Length == 4)
		{
			label->Location = Point(0, 10);
			label->Font = gcnew System::Drawing::Font("Segoe UI", 26);
		}
		else if (label->Text->Length > 4)
		{
			label->Location = Point(0, 20);
			label->Font = gcnew System::Drawing::Font("Segoe UI", 14);
		}
		else label->Font = gcnew System::Drawing::Font("Segoe UI", 32); 
	}
}

private: void AddSimpleList()
{
	float PBHEIGHT = graphicsPanel->Height / 2;

	Image^ IMGNormal = Image::FromFile("NodoSimpleNormal.png");
	Image^ IMGFinal = Image::FromFile("NodoSimpleFinal.png");

	for (int i = 0; i < simulador.getSize(); i++)
	{
		PictureBox^ pb = gcnew PictureBox();
		graphicsPanel->Controls->Add(pb);
		if (i + 1 == simulador.getSize())
		{
			pb->Image = IMGFinal;
		}
		else
		{
			pb->Image = IMGNormal;
		}
		pb->Location = Point(0 + 125 * i, PBHEIGHT);
		pb->Width = IMGNormal->Size.Width;
		pb->Height = IMGNormal->Size.Height;


		//Se crea sobre la picture box, ya es dinamico
		Label^ label = gcnew Label();
		label->Parent = pb;
		label->BackColor = System::Drawing::Color::Transparent;
		label->AutoSize = true;
		label->Location = Point(2, 0);
		label->Text = simulador.getPos(i).ToString();
		label->Font = gcnew System::Drawing::Font("Segoe UI", 32);
		if (label->Text->Length > 3)
		{
			label->Font = gcnew System::Drawing::Font("Segoe UI", 26);
			label->Location = Point(2, 18);
		}
		else if (label->Text->Length > 4)
		{
			label->Location = Point(0, 20);
			label->Font = gcnew System::Drawing::Font("Segoe UI", 14);
		}
		else label->Font = gcnew System::Drawing::Font("Segoe UI", 32);
	}
}

private: Void AddDobleList()
{
	float PBHEIGHT = graphicsPanel->Height / 2;

	Image^ IMGNormal = Image::FromFile("NodoDobleMedio.png");
	Image^ IMGFinal = Image::FromFile("NodoDobleFinal.png");
	Image^ IMGCabeza = Image::FromFile("NodoDobleCabeza.png");
	Image^ IMGSolo = Image::FromFile("NodoDobleSolo.png");

	int size = simulador.getSize();
	if (size == 1)
	{
		PictureBox^ pb = gcnew PictureBox();
		graphicsPanel->Controls->Add(pb);
		pb->Image = IMGSolo;
		pb->Location = Point(0, PBHEIGHT);
		pb->Width = IMGNormal->Size.Width;
		pb->Height = IMGNormal->Size.Height;


		//Se crea sobre la picture box, ya es dinamico
		Label^ label = gcnew Label();
		label->Parent = pb;
		label->BackColor = System::Drawing::Color::Transparent;
		label->AutoSize = true;
		label->Location = Point(38, 0);
		label->Text = simulador.getPos(0).ToString();
		if (label->Text->Length == 3)
		{
			label->Font = gcnew System::Drawing::Font("Segoe UI", 26);
			label->Location = Point(34, 5);
		}
		else if(label->Text->Length == 4)
		{
			label->Font = gcnew System::Drawing::Font("Segoe UI", 14);
			label->Location = Point(35, 18);
		}
		else if (label->Text->Length > 4)
		{
			label->Location = Point(0, 20);
			label->Font = gcnew System::Drawing::Font("Segoe UI", 14);
		}
		else label->Font = gcnew System::Drawing::Font("Segoe UI", 32);
	}
	else
	{
		for (int i = 0; i < size; i++)
		{
			PictureBox^ pb = gcnew PictureBox();
			graphicsPanel->Controls->Add(pb);
			if (i == 0)
			{
				pb->Image = IMGCabeza;
			}
			else if (i + 1 == size)
			{
				pb->Image = IMGFinal;
			}
			else
			{
				pb->Image = IMGNormal;
			}
			pb->Location = Point(0 + 145 * i, PBHEIGHT);
			pb->Width = IMGNormal->Size.Width;
			pb->Height = IMGNormal->Size.Height;


			//Se crea sobre la picture box, ya es dinamico
			Label^ label = gcnew Label();
			label->Parent = pb;
			label->BackColor = System::Drawing::Color::Transparent;
			label->AutoSize = true;
			label->Location = Point(36, 0);
			label->Text = simulador.getPos(i).ToString();
			if (label->Text->Length == 2)
			{
				label->Font = gcnew System::Drawing::Font("Segoe UI", 26);
				label->Location = Point(34, 5);
			}
			else if (label->Text->Length > 4)
			{
				label->Location = Point(0, 20);
				label->Font = gcnew System::Drawing::Font("Segoe UI", 14);
			}
			else label->Font = gcnew System::Drawing::Font("Segoe UI", 32);
		}
	}
}
private: Void AddListaCircular()
{
	float PBHEIGHT = graphicsPanel->Height / 2;

	Image^ IMGNormal = Image::FromFile("NodoCircularMedio.png");
	Image^ IMGFinal = Image::FromFile("NodoCircularFinal.png");
	Image^ IMGCabeza = Image::FromFile("NodoCircularCabeza.png");
	Image^ IMGSolo = Image::FromFile("NodoCircularSolo.png");

	int size = simulador.getSize();
	if (size == 1)
	{
		PictureBox^ pb = gcnew PictureBox();
		graphicsPanel->Controls->Add(pb);
		pb->Image = IMGSolo;
		pb->Location = Point(0, PBHEIGHT);
		pb->Width = IMGNormal->Size.Width;
		pb->Height = IMGNormal->Size.Height;


		//Se crea sobre la picture box, ya es dinamico
		Label^ label = gcnew Label();
		label->Parent = pb;
		label->BackColor = System::Drawing::Color::Transparent;
		label->AutoSize = true;
		label->Location = Point(38, 9);
		label->Text = simulador.getPos(0).ToString();
		if (label->Text->Length == 3)
		{
			label->Font = gcnew System::Drawing::Font("Segoe UI", 26);
			label->Location = Point(34, 16);
		}
		else if (label->Text->Length > 3)
		{
			label->Font = gcnew System::Drawing::Font("Segoe UI", 14);
			label->Location = Point(35, 25);
		}
		else label->Font = gcnew System::Drawing::Font("Segoe UI", 32);
	}
	else
	{
		for (int i = 0; i < size; i++)
		{
			PictureBox^ pb = gcnew PictureBox();
			graphicsPanel->Controls->Add(pb);
			if (i == 0)
			{
				pb->Image = IMGCabeza;
			}
			else if (i + 1 == size)
			{
				pb->Image = IMGFinal;
			}
			else
			{
				pb->Image = IMGNormal;
			}
			pb->Location = Point(0 + 145 * i, PBHEIGHT);
			pb->Width = IMGNormal->Size.Width;
			pb->Height = IMGNormal->Size.Height;


			//Se crea sobre la picture box, ya es dinamico
			Label^ label = gcnew Label();
			label->Parent = pb;
			label->BackColor = System::Drawing::Color::Transparent;
			label->AutoSize = true;
			label->Location = Point(36, 9);
			label->Text = simulador.getPos(i).ToString();
			if (label->Text->Length == 3)
			{
				label->Font = gcnew System::Drawing::Font("Segoe UI", 26);
				label->Location = Point(34, 16);
			}
			else if (label->Text->Length > 3)
			{
				label->Font = gcnew System::Drawing::Font("Segoe UI", 14);
				label->Location = Point(35, 28);
			}
			else label->Font = gcnew System::Drawing::Font("Segoe UI", 32);
		}
	}
}
private: System::Void ValorNodo_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (System::Text::RegularExpressions::Regex::IsMatch(ValorNodo->Text, "[^0-9]"))
	{
		ValorNodo->Text = ValorNodo->Text->Remove(ValorNodo->Text->Length - 1);
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	simulador.limpiarVector();
	graphicsPanel->Controls->Clear();
}
private: System::Void PosicionTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (System::Text::RegularExpressions::Regex::IsMatch(PosicionTextBox->Text, "[^0-9]"))
	{
		PosicionTextBox->Text = PosicionTextBox->Text->Remove(PosicionTextBox->Text->Length - 1);
	}
}
};
}
