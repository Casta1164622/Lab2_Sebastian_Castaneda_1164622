#pragma once
#include "figuras.h"

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
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
	private: System::Windows::Forms::ComboBox^ cBoxSeleccion;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ lblPerimetro;
	private: System::Windows::Forms::Label^ lblArea;



	private: System::Windows::Forms::Button^ btnCalcular;
	private: System::Windows::Forms::TextBox^ tboxLado;
	private: System::Windows::Forms::TextBox^ tboxApotema;



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
			this->cBoxSeleccion = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->lblPerimetro = (gcnew System::Windows::Forms::Label());
			this->lblArea = (gcnew System::Windows::Forms::Label());
			this->btnCalcular = (gcnew System::Windows::Forms::Button());
			this->tboxLado = (gcnew System::Windows::Forms::TextBox());
			this->tboxApotema = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// cBoxSeleccion
			// 
			this->cBoxSeleccion->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cBoxSeleccion->FormattingEnabled = true;
			this->cBoxSeleccion->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Triangulo", L"Cuadrado", L"Pentagono", L"Hexagono",
					L"Heptagono", L"Octagono", L"Eneagono", L"Decagono"
			});
			this->cBoxSeleccion->Location = System::Drawing::Point(28, 43);
			this->cBoxSeleccion->Name = L"cBoxSeleccion";
			this->cBoxSeleccion->Size = System::Drawing::Size(131, 25);
			this->cBoxSeleccion->TabIndex = 0;

			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(25, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(144, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Seleccionar Figura";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(25, 96);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 17);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Lado";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(24, 149);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 17);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Apotema";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(25, 219);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(78, 17);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Perimetro";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(24, 284);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(41, 17);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Area";
			// 
			// lblPerimetro
			// 
			this->lblPerimetro->AutoSize = true;
			this->lblPerimetro->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPerimetro->Location = System::Drawing::Point(148, 219);
			this->lblPerimetro->Name = L"lblPerimetro";
			this->lblPerimetro->Size = System::Drawing::Size(0, 17);
			this->lblPerimetro->TabIndex = 6;
			// 
			// lblArea
			// 
			this->lblArea->AutoSize = true;
			this->lblArea->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblArea->Location = System::Drawing::Point(148, 284);
			this->lblArea->Name = L"lblArea";
			this->lblArea->Size = System::Drawing::Size(0, 17);
			this->lblArea->TabIndex = 7;
			// 
			// btnCalcular
			// 
			this->btnCalcular->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCalcular->Location = System::Drawing::Point(243, 43);
			this->btnCalcular->Name = L"btnCalcular";
			this->btnCalcular->Size = System::Drawing::Size(164, 26);
			this->btnCalcular->TabIndex = 10;
			this->btnCalcular->Text = L"Calcular";
			this->btnCalcular->UseVisualStyleBackColor = true;
			this->btnCalcular->Click += gcnew System::EventHandler(this, &Form1::btnCalcular_Click);
			// 
			// tboxLado
			// 
			this->tboxLado->Location = System::Drawing::Point(108, 91);
			this->tboxLado->Name = L"tboxLado";
			this->tboxLado->Size = System::Drawing::Size(100, 22);
			this->tboxLado->TabIndex = 11;
			// 
			// tboxApotema
			// 
			this->tboxApotema->Location = System::Drawing::Point(108, 144);
			this->tboxApotema->Name = L"tboxApotema";
			this->tboxApotema->Size = System::Drawing::Size(100, 22);
			this->tboxApotema->TabIndex = 12;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(419, 362);
			this->Controls->Add(this->tboxApotema);
			this->Controls->Add(this->tboxLado);
			this->Controls->Add(this->btnCalcular);
			this->Controls->Add(this->lblArea);
			this->Controls->Add(this->lblPerimetro);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->cBoxSeleccion);
			this->Name = L"Form1";
			this->Text = L"Aplicacion";
			this->Move += gcnew System::EventHandler(this, &Form1::Form1_Move);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Move(System::Object^ sender, System::EventArgs^ e) {
		
	}

	private: System::Void btnCalcular_Click(System::Object^ sender, System::EventArgs^ e) {
		
		if (tboxLado->Text != "")
		{
			figuras figura;
			figura.lado = Convert::ToDouble(tboxLado->Text);
			figura.apotema = Convert::ToDouble(tboxApotema->Text);

			double perimetro = 0 ;
			double area = 0;
			switch (Convert::ToInt32(cBoxSeleccion->SelectedIndex))
			{
			case 0:
				perimetro = figura.perimetro(figura.lado, 3);
				area = figura.areaTriangulo(figura.lado);
				break;
			case 1:
				perimetro = figura.perimetro(figura.lado, 4);
				area = figura.areaCuadrado(figura.lado);
				break;
			case 2:
				perimetro = figura.perimetro(figura.lado, 5);
				area = figura.areaGeneric(perimetro, figura.apotema);
				break;
			case 3:
				perimetro = figura.perimetro(figura.lado, 6);
				area = figura.areaGeneric(perimetro, figura.apotema);
				break;
			case 4:
				perimetro = figura.perimetro(figura.lado, 7);
				area = figura.areaGeneric(perimetro, figura.apotema);
				break;
			case 5:
				perimetro = figura.perimetro(figura.lado, 8);
				area = figura.areaGeneric(perimetro, figura.apotema);
				break;
			case 6:
				perimetro = figura.perimetro(figura.lado, 9);
				area = figura.areaGeneric(perimetro, figura.apotema);
				break;
			case 7:
				perimetro = figura.perimetro(figura.lado, 10);
				area = figura.areaGeneric(perimetro, figura.apotema);
				break;
			default:
				break;
			}

			lblPerimetro->Text = "El perimetro es: " + perimetro;
			lblArea->Text = "El area es: " + area;
		}
		

		
		}
	};
}
