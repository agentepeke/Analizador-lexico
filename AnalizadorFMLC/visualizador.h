#pragma once
#include <fstream>
#include <iostream>
#include <string.h>
#include <string>
#include <String>
#include <stdlib.h>
#include <stdio.h>
namespace CppCLRWinformsProjekt {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace System::Text;


	public ref class visualizador : public System::Windows::Forms::Form
	{
	public:
		visualizador(void)
		{
			InitializeComponent();

		}
	
	protected:

		~visualizador()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ BotonCargar;
	protected:

	private: System::Windows::Forms::Label^ label1;



	private: System::Windows::Forms::DataGridView^ dataGridView1;



	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Linea;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ TOKEN;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ TIPO;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CANTIDAD;
	private: System::Windows::Forms::Label^ label3;


	protected:

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->BotonCargar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->TOKEN = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TIPO = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CANTIDAD = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Linea = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// BotonCargar
			this->BotonCargar->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->BotonCargar->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BotonCargar->Location = System::Drawing::Point(252, 485);
			this->BotonCargar->Name = L"BotonCargar";
			this->BotonCargar->Size = System::Drawing::Size(111, 49);
			this->BotonCargar->TabIndex = 0;
			this->BotonCargar->Text = L"CARGAR";
			this->BotonCargar->UseVisualStyleBackColor = false;
			this->BotonCargar->Click += gcnew System::EventHandler(this, &visualizador::button1_Click);
			// label1
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(429, 59);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 15);
			this->label1->TabIndex = 1;
			this->label1->Click += gcnew System::EventHandler(this, &visualizador::label1_Click);
			// dataGridView1
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->TOKEN,
					this->TIPO, this->CANTIDAD
			});
			this->dataGridView1->Location = System::Drawing::Point(15, 59);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(348, 386);
			this->dataGridView1->TabIndex = 6;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &visualizador::dataGridView1_CellContentClick);
			// TOKEN
			this->TOKEN->HeaderText = L"TOKEN";
			this->TOKEN->Name = L"TOKEN";
			this->TOKEN->ReadOnly = true;
			// TIPO
			this->TIPO->HeaderText = L"TIPO";
			this->TIPO->Name = L"TIPO";
			this->TIPO->ReadOnly = true;
			// CANTIDAD
			this->CANTIDAD->HeaderText = L"CANTIDAD";
			this->CANTIDAD->Name = L"CANTIDAD";
			this->CANTIDAD->ReadOnly = true;
			this->CANTIDAD->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// label4
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 38);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(183, 18);
			this->label4->TabIndex = 7;
			this->label4->Text = L"ANALIZADOR LEXICO";
			this->label4->Click += gcnew System::EventHandler(this, &visualizador::label4_Click);
			// label2
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 464);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 18);
			this->label2->TabIndex = 8;
			this->label2->Text = L"ERROR:";
			this->label2->Click += gcnew System::EventHandler(this, &visualizador::label2_Click_1);
			// dataGridView2
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Linea });
			this->dataGridView2->Location = System::Drawing::Point(15, 485);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(144, 81);
			this->dataGridView2->TabIndex = 9;
			// Linea
			this->Linea->HeaderText = L"Línea";
			this->Linea->Name = L"Linea";
			this->Linea->ReadOnly = true;
			// label3 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 18);
			this->label3->TabIndex = 10;
			this->label3->Text = L"FMLC";
			this->label3->Click += gcnew System::EventHandler(this, &visualizador::label3_Click);
			// visualizador
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(888, 578);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->BotonCargar);
			this->Name = L"visualizador";
			this->Text = L"Analizador léxico";
			this->Load += gcnew System::EventHandler(this, &visualizador::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->label1->Text = "";
		using namespace System::IO;
		Stream^ archivo;
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		openFileDialog1->Filter = "Archivos TXT(*.txt) | *.txt";
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			if ((archivo = openFileDialog1->OpenFile()) != nullptr) {
				String^ nombreArchivo = openFileDialog1->InitialDirectory + openFileDialog1->FileName; //Obtiene la ruta del archivo
				//¿Verificar que sea .txt?
				String^ contenidoArchivo = File::ReadAllText(nombreArchivo); 
				archivo->Close();
				//lectura del archivo
				StreamReader^ lectura2 = gcnew StreamReader(nombreArchivo);
				String^ linea;
				cli:array<String^, 1>^ conv3;
				//Palabras reservadas
				array<String^, 1>^ palabrasReservadas = { "entero", "decimal", "booleano", "cadena","si", "sino", "mientras", "hacer", "verdadero", "falso"};
				int contador[10] = { 0,0,0, 0, 0, 0, 0, 0, 0, 0};
				array<String^, 1>^ operador = {"+", "-", "*", "/", "%", "=", "==", ">=", "<=", "<", ">"};
				int contadorOperador[11] = { 0,0,0,0,0,0,0,0,0,0,0};
				array<String^, 1>^ signos = { "(", ")", "{", "}",";", "."};
				int contadorSigno[6] = { 0,0,0,0,0, 0};
				array<String^, 1>^ extras;
				bool encontrada = 0;
				while (!lectura2->EndOfStream) {
					
					linea = lectura2->ReadLine();
					
					this->label1->Text += "\n" + linea;
					
					conv3->Clear;
					conv3 = linea->Split();
					//compara las palabras con las reservadas
					for (int i = 0; i < conv3->Length; i++) {//recorre todas las palabras de la línea
						encontrada = 0;//reiniciada cuando cambia de palabra
						
						for (int j = 0; j < palabrasReservadas->Length; j++) {//recorre las palabras reservadas
							if (conv3[i] == palabrasReservadas[j]) {//si la palabra coincide con una reservada
								contador[j]++;//suma al contador de la palabra reservada
								encontrada = 1;
							}
							else if (conv3[i]== "verdadero;" && palabrasReservadas[j] == "verdadero") {//si se encuentra en un fin de linea y es un verdadero o falso
								contador[j]++;//suma al contador de la palabra reservada
								encontrada = 1;
							}
							else if (conv3[i] == "falso;" && palabrasReservadas[j] == "falso") {//si se encuentra en un fin de linea y es un verdadero o falso
								contador[j]++;//suma al contador de la palabra reservada
								encontrada = 1;
							}
						}
						for (int j = 0; j < operador->Length; j++) {
							//buscar si coincide con un operador
							if (conv3[i] == operador[j]) {
								contadorOperador[j]++;//suma al contador del operador
								encontrada = 1;
							}
						}
						for (int j = 0; j < signos->Length; j++) {
								if (conv3[i] == signos[j] || conv3[i]->Contains(signos[j])) {//si la palabra coincide con una reservada
								contadorSigno[j]++;//suma al contador de la palabra reservada
								encontrada = 1;
							}
						}
						if (encontrada == 0 && conv3[i]!= " ") {//la palbra no corresponde a una palabra reservada, operador o signo
							//agrega a la tabla para verificacion de lectura
							int n = this->dataGridView1->Rows->Add();
							this->dataGridView1->Rows[n]->Cells[0]->Value = conv3[i];//Token
							//revisar si cumple con los requisitos para ser un identificador o un numero
							array<String^, 1>^ D = { "1", "2", "3", "4", "5", "6", "7", "8", "9" };
							array<String^, 1>^ L = { "a", "b","c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z" };
							//análisis NÚMEROS
							for (int k = 0; k < D->Length; k++) {
								if (conv3[i]->StartsWith(D[k])) {
					
								}
							}
							
						}
					}
				}
				// se agregan a la tabla
				for (int i = 0; i < 10; i++) {
					if (contador[i] != 0) {
						//adicionar una nueva fila a la tabla
						int n = this->dataGridView1->Rows->Add();
						//colocar la información de Token, tipo y cantidad en la tabla
						this->dataGridView1->Rows[n]->Cells[0]->Value = palabrasReservadas[i];//Token
						this->dataGridView1->Rows[n]->Cells[1]->Value = "Palabra Reservada";//Tipo
						this->dataGridView1->Rows[n]->Cells[2]->Value = contador[i];//Cantidad
					}
				}
				for (int i = 0; i < 11; i++) {
					if (contadorOperador[i] != 0) {
						//adicionar una nueva fila a la tabla
						int n = this->dataGridView1->Rows->Add();
						//colocar la información de Token, tipo y cantidad en la tabla
						this->dataGridView1->Rows[n]->Cells[0]->Value = operador[i];//Token
						this->dataGridView1->Rows[n]->Cells[1]->Value = "Operador";//Tipo
						this->dataGridView1->Rows[n]->Cells[2]->Value = contadorOperador[i];//Cantidad
					}
				}
				for (int i = 0; i < 5; i++) {
					if (contadorSigno[i] != 0) {
						//adicionar una nueva fila a la tabla
						int n = this->dataGridView1->Rows->Add();
						//colocar la información de Token, tipo y cantidad en la tabla
						this->dataGridView1->Rows[n]->Cells[0]->Value = signos[i];//Token
						this->dataGridView1->Rows[n]->Cells[1]->Value = "Signo";//Tipo
						this->dataGridView1->Rows[n]->Cells[2]->Value = contadorSigno[i];//Cantidad
					}
				}
			}
		}
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void openFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {

	}
private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}