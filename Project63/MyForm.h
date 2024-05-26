#pragma once

namespace Project63 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// Сводка для MyForm
	/// </summary>class BaseForm {

	public ref class MyForm : public System::Windows::Forms::Form
	{
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
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ cin;
	private: System::Windows::Forms::Button^ cin1;
	protected:

	protected:

	private: System::Windows::Forms::Button^ Pi;
	private: System::Windows::Forms::Button^ n1;


	private: System::Windows::Forms::Button^ x2;
	private: System::Windows::Forms::Button^ ix;


	private: System::Windows::Forms::Button^ kos1;
	private: System::Windows::Forms::Button^ kos;
	private: System::Windows::Forms::Button^ senh;
	private: System::Windows::Forms::Button^ senh1;
	private: System::Windows::Forms::Button^ lag;
	private: System::Windows::Forms::Button^ xiy;






	private: System::Windows::Forms::Button^ xx3;


	private: System::Windows::Forms::Button^ en;

	private: System::Windows::Forms::Button^ taan1;


	private: System::Windows::Forms::Button^ taan;
	private: System::Windows::Forms::Button^ tanh;
	private: System::Windows::Forms::Button^ tanh1;



	private: System::Windows::Forms::Button^ Xten;
	private: System::Windows::Forms::Button^ yX;



	private: System::Windows::Forms::Button^ Xkor;

	private: System::Windows::Forms::Button^ logyX;

	private: System::Windows::Forms::Button^ cash1;

	private: System::Windows::Forms::Button^ cash;
	private: System::Windows::Forms::Button^ skobkalevo;
	private: System::Windows::Forms::Button^ tocka1;



	private: System::Windows::Forms::Button^ skobkaprava;

	private: System::Windows::Forms::Button^ strelka;
	private: System::Windows::Forms::Button^ Mplus;
	private: System::Windows::Forms::Button^ MS;
	private: System::Windows::Forms::Button^ MR;
	private: System::Windows::Forms::Button^ MC;





	private: System::Windows::Forms::Button^ chetri;

	private: System::Windows::Forms::Button^ pat;

	private: System::Windows::Forms::Button^ shest;

	private: System::Windows::Forms::Button^ button36;
	private: System::Windows::Forms::Button^ delit;

	private: System::Windows::Forms::Button^ devat;
	private: System::Windows::Forms::Button^ vosem;
	private: System::Windows::Forms::Button^ sem;



	private: System::Windows::Forms::Button^ nol;
	private: System::Windows::Forms::Button^ tochka;
	private: System::Windows::Forms::Button^ plusminus;
	private: System::Windows::Forms::Button^ plus;
	private: System::Windows::Forms::Button^ minus;
	private: System::Windows::Forms::Button^ tri;
	private: System::Windows::Forms::Button^ dva;
	private: System::Windows::Forms::Button^ odin;
	private: System::Windows::Forms::Button^ ravno;
	private: System::Windows::Forms::Button^ mod;
	private: System::Windows::Forms::Button^ abs;
	private: System::Windows::Forms::Button^ AC;

	private: System::Windows::Forms::Button^ Mminus;
private: System::Windows::Forms::Label^ label_result;

	private: System::Windows::Forms::Label^ label2;















	private:
		bool check = false;
		double first_nmb; 
		double second_nmb;
		char action;
		
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->cin = (gcnew System::Windows::Forms::Button());
			this->cin1 = (gcnew System::Windows::Forms::Button());
			this->Pi = (gcnew System::Windows::Forms::Button());
			this->n1 = (gcnew System::Windows::Forms::Button());
			this->x2 = (gcnew System::Windows::Forms::Button());
			this->ix = (gcnew System::Windows::Forms::Button());
			this->kos1 = (gcnew System::Windows::Forms::Button());
			this->kos = (gcnew System::Windows::Forms::Button());
			this->senh = (gcnew System::Windows::Forms::Button());
			this->senh1 = (gcnew System::Windows::Forms::Button());
			this->lag = (gcnew System::Windows::Forms::Button());
			this->xiy = (gcnew System::Windows::Forms::Button());
			this->xx3 = (gcnew System::Windows::Forms::Button());
			this->en = (gcnew System::Windows::Forms::Button());
			this->taan1 = (gcnew System::Windows::Forms::Button());
			this->taan = (gcnew System::Windows::Forms::Button());
			this->tanh = (gcnew System::Windows::Forms::Button());
			this->tanh1 = (gcnew System::Windows::Forms::Button());
			this->Xten = (gcnew System::Windows::Forms::Button());
			this->yX = (gcnew System::Windows::Forms::Button());
			this->Xkor = (gcnew System::Windows::Forms::Button());
			this->logyX = (gcnew System::Windows::Forms::Button());
			this->cash1 = (gcnew System::Windows::Forms::Button());
			this->cash = (gcnew System::Windows::Forms::Button());
			this->skobkalevo = (gcnew System::Windows::Forms::Button());
			this->tocka1 = (gcnew System::Windows::Forms::Button());
			this->skobkaprava = (gcnew System::Windows::Forms::Button());
			this->strelka = (gcnew System::Windows::Forms::Button());
			this->Mplus = (gcnew System::Windows::Forms::Button());
			this->MS = (gcnew System::Windows::Forms::Button());
			this->MR = (gcnew System::Windows::Forms::Button());
			this->MC = (gcnew System::Windows::Forms::Button());
			this->chetri = (gcnew System::Windows::Forms::Button());
			this->pat = (gcnew System::Windows::Forms::Button());
			this->shest = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->delit = (gcnew System::Windows::Forms::Button());
			this->devat = (gcnew System::Windows::Forms::Button());
			this->vosem = (gcnew System::Windows::Forms::Button());
			this->sem = (gcnew System::Windows::Forms::Button());
			this->nol = (gcnew System::Windows::Forms::Button());
			this->tochka = (gcnew System::Windows::Forms::Button());
			this->plusminus = (gcnew System::Windows::Forms::Button());
			this->plus = (gcnew System::Windows::Forms::Button());
			this->minus = (gcnew System::Windows::Forms::Button());
			this->tri = (gcnew System::Windows::Forms::Button());
			this->dva = (gcnew System::Windows::Forms::Button());
			this->odin = (gcnew System::Windows::Forms::Button());
			this->ravno = (gcnew System::Windows::Forms::Button());
			this->mod = (gcnew System::Windows::Forms::Button());
			this->abs = (gcnew System::Windows::Forms::Button());
			this->AC = (gcnew System::Windows::Forms::Button());
			this->Mminus = (gcnew System::Windows::Forms::Button());
			this->label_result = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// cin
			// 
			this->cin->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->cin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cin->ForeColor = System::Drawing::Color::White;
			this->cin->Location = System::Drawing::Point(90, 209);
			this->cin->Name = L"cin";
			this->cin->Size = System::Drawing::Size(75, 48);
			this->cin->TabIndex = 0;
			this->cin->Text = L"sin";
			this->cin->UseVisualStyleBackColor = false;
			// 
			// cin1
			// 
			this->cin1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->cin1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cin1->ForeColor = System::Drawing::Color::White;
			this->cin1->Location = System::Drawing::Point(171, 209);
			this->cin1->Name = L"cin1";
			this->cin1->Size = System::Drawing::Size(75, 48);
			this->cin1->TabIndex = 1;
			this->cin1->Text = L"sin-¹";
			this->cin1->UseVisualStyleBackColor = false;
			// 
			// Pi
			// 
			this->Pi->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Pi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Pi->ForeColor = System::Drawing::Color::White;
			this->Pi->Location = System::Drawing::Point(252, 209);
			this->Pi->Name = L"Pi";
			this->Pi->Size = System::Drawing::Size(75, 48);
			this->Pi->TabIndex = 2;
			this->Pi->Text = L"π";
			this->Pi->UseVisualStyleBackColor = false;
			this->Pi->Click += gcnew System::EventHandler(this, &MyForm::P314);
			// 
			// n1
			// 
			this->n1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->n1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->n1->ForeColor = System::Drawing::Color::White;
			this->n1->Location = System::Drawing::Point(333, 209);
			this->n1->Name = L"n1";
			this->n1->Size = System::Drawing::Size(75, 48);
			this->n1->TabIndex = 3;
			this->n1->Text = L"n!";
			this->n1->UseVisualStyleBackColor = false;
			// 
			// x2
			// 
			this->x2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->x2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->x2->ForeColor = System::Drawing::Color::White;
			this->x2->Location = System::Drawing::Point(333, 275);
			this->x2->Name = L"x2";
			this->x2->Size = System::Drawing::Size(75, 48);
			this->x2->TabIndex = 4;
			this->x2->Text = L"Х²";
			this->x2->UseVisualStyleBackColor = false;
			// 
			// ix
			// 
			this->ix->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ix->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ix->ForeColor = System::Drawing::Color::White;
			this->ix->Location = System::Drawing::Point(252, 275);
			this->ix->Name = L"ix";
			this->ix->Size = System::Drawing::Size(75, 48);
			this->ix->TabIndex = 5;
			this->ix->Text = L"ex";
			this->ix->UseVisualStyleBackColor = false;
			// 
			// kos1
			// 
			this->kos1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->kos1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->kos1->ForeColor = System::Drawing::Color::White;
			this->kos1->Location = System::Drawing::Point(171, 275);
			this->kos1->Name = L"kos1";
			this->kos1->Size = System::Drawing::Size(75, 48);
			this->kos1->TabIndex = 6;
			this->kos1->Text = L"cos-¹";
			this->kos1->UseVisualStyleBackColor = false;
			// 
			// kos
			// 
			this->kos->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->kos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->kos->ForeColor = System::Drawing::Color::White;
			this->kos->Location = System::Drawing::Point(90, 275);
			this->kos->Name = L"kos";
			this->kos->Size = System::Drawing::Size(75, 48);
			this->kos->TabIndex = 7;
			this->kos->Text = L"cos";
			this->kos->UseVisualStyleBackColor = false;
			// 
			// senh
			// 
			this->senh->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->senh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->senh->ForeColor = System::Drawing::Color::White;
			this->senh->Location = System::Drawing::Point(90, 383);
			this->senh->Name = L"senh";
			this->senh->Size = System::Drawing::Size(75, 48);
			this->senh->TabIndex = 15;
			this->senh->Text = L"sinh";
			this->senh->UseVisualStyleBackColor = false;
			// 
			// senh1
			// 
			this->senh1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->senh1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->senh1->ForeColor = System::Drawing::Color::White;
			this->senh1->Location = System::Drawing::Point(171, 383);
			this->senh1->Name = L"senh1";
			this->senh1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->senh1->Size = System::Drawing::Size(75, 48);
			this->senh1->TabIndex = 14;
			this->senh1->Text = L"sinh-¹";
			this->senh1->UseVisualStyleBackColor = false;
			// 
			// lag
			// 
			this->lag->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lag->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lag->ForeColor = System::Drawing::Color::White;
			this->lag->Location = System::Drawing::Point(252, 383);
			this->lag->Name = L"lag";
			this->lag->Size = System::Drawing::Size(75, 48);
			this->lag->TabIndex = 13;
			this->lag->Text = L"log";
			this->lag->UseVisualStyleBackColor = false;
			// 
			// xiy
			// 
			this->xiy->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->xiy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->xiy->ForeColor = System::Drawing::Color::White;
			this->xiy->Location = System::Drawing::Point(333, 383);
			this->xiy->Name = L"xiy";
			this->xiy->Size = System::Drawing::Size(75, 48);
			this->xiy->TabIndex = 12;
			this->xiy->Text = L"xY";
			this->xiy->UseVisualStyleBackColor = false;
			// 
			// xx3
			// 
			this->xx3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->xx3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->xx3->ForeColor = System::Drawing::Color::White;
			this->xx3->Location = System::Drawing::Point(333, 329);
			this->xx3->Name = L"xx3";
			this->xx3->Size = System::Drawing::Size(75, 48);
			this->xx3->TabIndex = 11;
			this->xx3->Text = L"x³";
			this->xx3->UseVisualStyleBackColor = false;
			// 
			// en
			// 
			this->en->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->en->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->en->ForeColor = System::Drawing::Color::White;
			this->en->Location = System::Drawing::Point(252, 329);
			this->en->Name = L"en";
			this->en->Size = System::Drawing::Size(75, 48);
			this->en->TabIndex = 10;
			this->en->Text = L"In";
			this->en->UseVisualStyleBackColor = false;
			// 
			// taan1
			// 
			this->taan1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->taan1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->taan1->ForeColor = System::Drawing::Color::White;
			this->taan1->Location = System::Drawing::Point(171, 329);
			this->taan1->Name = L"taan1";
			this->taan1->Size = System::Drawing::Size(75, 48);
			this->taan1->TabIndex = 9;
			this->taan1->Text = L"tan-¹";
			this->taan1->UseVisualStyleBackColor = false;
			// 
			// taan
			// 
			this->taan->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->taan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->taan->ForeColor = System::Drawing::Color::White;
			this->taan->Location = System::Drawing::Point(90, 329);
			this->taan->Name = L"taan";
			this->taan->Size = System::Drawing::Size(75, 48);
			this->taan->TabIndex = 8;
			this->taan->Text = L"tan";
			this->taan->UseVisualStyleBackColor = false;
			// 
			// tanh
			// 
			this->tanh->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->tanh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tanh->ForeColor = System::Drawing::Color::White;
			this->tanh->Location = System::Drawing::Point(90, 491);
			this->tanh->Name = L"tanh";
			this->tanh->Size = System::Drawing::Size(75, 48);
			this->tanh->TabIndex = 23;
			this->tanh->Text = L"tanh";
			this->tanh->UseVisualStyleBackColor = false;
			// 
			// tanh1
			// 
			this->tanh1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->tanh1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tanh1->ForeColor = System::Drawing::Color::White;
			this->tanh1->Location = System::Drawing::Point(171, 491);
			this->tanh1->Name = L"tanh1";
			this->tanh1->Size = System::Drawing::Size(75, 48);
			this->tanh1->TabIndex = 22;
			this->tanh1->Text = L"tanh-¹";
			this->tanh1->UseVisualStyleBackColor = false;
			// 
			// Xten
			// 
			this->Xten->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Xten->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Xten->ForeColor = System::Drawing::Color::White;
			this->Xten->Location = System::Drawing::Point(252, 491);
			this->Xten->Name = L"Xten";
			this->Xten->Size = System::Drawing::Size(75, 48);
			this->Xten->TabIndex = 21;
			this->Xten->Text = L"10X";
			this->Xten->UseVisualStyleBackColor = false;
			// 
			// yX
			// 
			this->yX->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->yX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->yX->ForeColor = System::Drawing::Color::White;
			this->yX->Location = System::Drawing::Point(333, 491);
			this->yX->Name = L"yX";
			this->yX->Size = System::Drawing::Size(75, 48);
			this->yX->TabIndex = 20;
			this->yX->Text = L"y√x";
			this->yX->UseVisualStyleBackColor = false;
			// 
			// Xkor
			// 
			this->Xkor->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Xkor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Xkor->ForeColor = System::Drawing::Color::White;
			this->Xkor->Location = System::Drawing::Point(333, 437);
			this->Xkor->Name = L"Xkor";
			this->Xkor->Size = System::Drawing::Size(75, 48);
			this->Xkor->TabIndex = 19;
			this->Xkor->Text = L"√x";
			this->Xkor->UseVisualStyleBackColor = false;
			// 
			// logyX
			// 
			this->logyX->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->logyX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->logyX->ForeColor = System::Drawing::Color::White;
			this->logyX->Location = System::Drawing::Point(252, 437);
			this->logyX->Name = L"logyX";
			this->logyX->Size = System::Drawing::Size(75, 48);
			this->logyX->TabIndex = 18;
			this->logyX->Text = L"logyX";
			this->logyX->UseVisualStyleBackColor = false;
			// 
			// cash1
			// 
			this->cash1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->cash1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cash1->ForeColor = System::Drawing::Color::White;
			this->cash1->Location = System::Drawing::Point(171, 437);
			this->cash1->Name = L"cash1";
			this->cash1->Size = System::Drawing::Size(75, 48);
			this->cash1->TabIndex = 17;
			this->cash1->Text = L"cosh-¹";
			this->cash1->UseVisualStyleBackColor = false;
			// 
			// cash
			// 
			this->cash->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->cash->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cash->ForeColor = System::Drawing::Color::White;
			this->cash->Location = System::Drawing::Point(90, 437);
			this->cash->Name = L"cash";
			this->cash->Size = System::Drawing::Size(75, 48);
			this->cash->TabIndex = 16;
			this->cash->Text = L"cosh";
			this->cash->UseVisualStyleBackColor = false;
			// 
			// skobkalevo
			// 
			this->skobkalevo->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->skobkalevo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->skobkalevo->ForeColor = System::Drawing::Color::White;
			this->skobkalevo->Location = System::Drawing::Point(569, 275);
			this->skobkalevo->Name = L"skobkalevo";
			this->skobkalevo->Size = System::Drawing::Size(75, 48);
			this->skobkalevo->TabIndex = 31;
			this->skobkalevo->Text = L"(";
			this->skobkalevo->UseVisualStyleBackColor = false;
			// 
			// tocka1
			// 
			this->tocka1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->tocka1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tocka1->ForeColor = System::Drawing::Color::White;
			this->tocka1->Location = System::Drawing::Point(650, 275);
			this->tocka1->Name = L"tocka1";
			this->tocka1->Size = System::Drawing::Size(75, 48);
			this->tocka1->TabIndex = 30;
			this->tocka1->Text = L".";
			this->tocka1->UseVisualStyleBackColor = false;
			// 
			// skobkaprava
			// 
			this->skobkaprava->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->skobkaprava->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->skobkaprava->ForeColor = System::Drawing::Color::White;
			this->skobkaprava->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"skobkaprava.Image")));
			this->skobkaprava->Location = System::Drawing::Point(731, 275);
			this->skobkaprava->Name = L"skobkaprava";
			this->skobkaprava->Size = System::Drawing::Size(75, 48);
			this->skobkaprava->TabIndex = 29;
			this->skobkaprava->Text = L")";
			this->skobkaprava->UseVisualStyleBackColor = false;
			// 
			// strelka
			// 
			this->strelka->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->strelka->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->strelka->ForeColor = System::Drawing::Color::White;
			this->strelka->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"strelka.Image")));
			this->strelka->Location = System::Drawing::Point(812, 275);
			this->strelka->Name = L"strelka";
			this->strelka->Size = System::Drawing::Size(75, 48);
			this->strelka->TabIndex = 28;
			this->strelka->Text = L"<--";
			this->strelka->UseVisualStyleBackColor = false;
			// 
			// Mplus
			// 
			this->Mplus->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Mplus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Mplus->ForeColor = System::Drawing::Color::White;
			this->Mplus->Location = System::Drawing::Point(812, 209);
			this->Mplus->Name = L"Mplus";
			this->Mplus->Size = System::Drawing::Size(75, 48);
			this->Mplus->TabIndex = 27;
			this->Mplus->Text = L"M+";
			this->Mplus->UseVisualStyleBackColor = false;
			// 
			// MS
			// 
			this->MS->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->MS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MS->ForeColor = System::Drawing::Color::White;
			this->MS->Location = System::Drawing::Point(731, 209);
			this->MS->Name = L"MS";
			this->MS->Size = System::Drawing::Size(75, 48);
			this->MS->TabIndex = 26;
			this->MS->Text = L"MS";
			this->MS->UseVisualStyleBackColor = false;
			// 
			// MR
			// 
			this->MR->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->MR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MR->ForeColor = System::Drawing::Color::White;
			this->MR->Location = System::Drawing::Point(650, 209);
			this->MR->Name = L"MR";
			this->MR->Size = System::Drawing::Size(75, 48);
			this->MR->TabIndex = 25;
			this->MR->Text = L"MR";
			this->MR->UseVisualStyleBackColor = false;
			// 
			// MC
			// 
			this->MC->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->MC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MC->ForeColor = System::Drawing::Color::White;
			this->MC->Location = System::Drawing::Point(569, 209);
			this->MC->Name = L"MC";
			this->MC->Size = System::Drawing::Size(75, 48);
			this->MC->TabIndex = 24;
			this->MC->Text = L"MC";
			this->MC->UseVisualStyleBackColor = false;
			// 
			// chetri
			// 
			this->chetri->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->chetri->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->chetri->ForeColor = System::Drawing::Color::White;
			this->chetri->Location = System::Drawing::Point(569, 383);
			this->chetri->Name = L"chetri";
			this->chetri->Size = System::Drawing::Size(75, 48);
			this->chetri->TabIndex = 39;
			this->chetri->Text = L"4";
			this->chetri->UseVisualStyleBackColor = false;
			this->chetri->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// pat
			// 
			this->pat->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->pat->ForeColor = System::Drawing::Color::White;
			this->pat->Location = System::Drawing::Point(650, 383);
			this->pat->Name = L"pat";
			this->pat->Size = System::Drawing::Size(75, 48);
			this->pat->TabIndex = 38;
			this->pat->Text = L"5";
			this->pat->UseVisualStyleBackColor = false;
			this->pat->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// shest
			// 
			this->shest->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->shest->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->shest->ForeColor = System::Drawing::Color::White;
			this->shest->Location = System::Drawing::Point(731, 383);
			this->shest->Name = L"shest";
			this->shest->Size = System::Drawing::Size(75, 48);
			this->shest->TabIndex = 37;
			this->shest->Text = L"6";
			this->shest->UseVisualStyleBackColor = false;
			this->shest->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button36
			// 
			this->button36->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button36->ForeColor = System::Drawing::Color::White;
			this->button36->Location = System::Drawing::Point(812, 383);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(75, 48);
			this->button36->TabIndex = 36;
			this->button36->Text = L"x";
			this->button36->UseVisualStyleBackColor = false;
			this->button36->Click += gcnew System::EventHandler(this, &MyForm::btn_mult_Click);
			// 
			// delit
			// 
			this->delit->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->delit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->delit->ForeColor = System::Drawing::Color::White;
			this->delit->Location = System::Drawing::Point(812, 329);
			this->delit->Name = L"delit";
			this->delit->Size = System::Drawing::Size(75, 48);
			this->delit->TabIndex = 35;
			this->delit->Text = L"÷";
			this->delit->UseVisualStyleBackColor = false;
			this->delit->Click += gcnew System::EventHandler(this, &MyForm::btn_del_Click);
			// 
			// devat
			// 
			this->devat->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->devat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->devat->ForeColor = System::Drawing::Color::White;
			this->devat->Location = System::Drawing::Point(731, 329);
			this->devat->Name = L"devat";
			this->devat->Size = System::Drawing::Size(75, 48);
			this->devat->TabIndex = 34;
			this->devat->Text = L"9";
			this->devat->UseVisualStyleBackColor = false;
			this->devat->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// vosem
			// 
			this->vosem->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->vosem->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->vosem->ForeColor = System::Drawing::Color::White;
			this->vosem->Location = System::Drawing::Point(650, 329);
			this->vosem->Name = L"vosem";
			this->vosem->Size = System::Drawing::Size(75, 48);
			this->vosem->TabIndex = 33;
			this->vosem->Text = L"8";
			this->vosem->UseVisualStyleBackColor = false;
			this->vosem->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// sem
			// 
			this->sem->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->sem->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sem->ForeColor = System::Drawing::Color::White;
			this->sem->Location = System::Drawing::Point(569, 329);
			this->sem->Name = L"sem";
			this->sem->Size = System::Drawing::Size(75, 48);
			this->sem->TabIndex = 32;
			this->sem->Text = L"7";
			this->sem->UseVisualStyleBackColor = false;
			this->sem->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// nol
			// 
			this->nol->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->nol->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->nol->ForeColor = System::Drawing::Color::White;
			this->nol->Location = System::Drawing::Point(569, 491);
			this->nol->Name = L"nol";
			this->nol->Size = System::Drawing::Size(75, 48);
			this->nol->TabIndex = 47;
			this->nol->Text = L"0";
			this->nol->UseVisualStyleBackColor = false;
			this->nol->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// tochka
			// 
			this->tochka->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->tochka->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tochka->ForeColor = System::Drawing::Color::White;
			this->tochka->Location = System::Drawing::Point(650, 491);
			this->tochka->Name = L"tochka";
			this->tochka->Size = System::Drawing::Size(75, 48);
			this->tochka->TabIndex = 46;
			this->tochka->Text = L".";
			this->tochka->UseVisualStyleBackColor = false;
			// 
			// plusminus
			// 
			this->plusminus->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->plusminus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->plusminus->ForeColor = System::Drawing::Color::White;
			this->plusminus->Location = System::Drawing::Point(731, 491);
			this->plusminus->Name = L"plusminus";
			this->plusminus->Size = System::Drawing::Size(75, 48);
			this->plusminus->TabIndex = 45;
			this->plusminus->Text = L"+/-";
			this->plusminus->UseVisualStyleBackColor = false;
			// 
			// plus
			// 
			this->plus->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->plus->ForeColor = System::Drawing::Color::White;
			this->plus->Location = System::Drawing::Point(812, 491);
			this->plus->Name = L"plus";
			this->plus->Size = System::Drawing::Size(75, 48);
			this->plus->TabIndex = 44;
			this->plus->Text = L"+";
			this->plus->UseVisualStyleBackColor = false;
			this->plus->Click += gcnew System::EventHandler(this, &MyForm::btn_plus_Click);
			// 
			// minus
			// 
			this->minus->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->minus->ForeColor = System::Drawing::Color::White;
			this->minus->Location = System::Drawing::Point(812, 437);
			this->minus->Name = L"minus";
			this->minus->Size = System::Drawing::Size(75, 48);
			this->minus->TabIndex = 43;
			this->minus->Text = L"-";
			this->minus->UseVisualStyleBackColor = false;
			this->minus->Click += gcnew System::EventHandler(this, &MyForm::btn_minus_Click);
			// 
			// tri
			// 
			this->tri->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->tri->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tri->ForeColor = System::Drawing::Color::White;
			this->tri->Location = System::Drawing::Point(731, 437);
			this->tri->Name = L"tri";
			this->tri->Size = System::Drawing::Size(75, 48);
			this->tri->TabIndex = 42;
			this->tri->Text = L"3";
			this->tri->UseVisualStyleBackColor = false;
			this->tri->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dva
			// 
			this->dva->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dva->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dva->ForeColor = System::Drawing::Color::White;
			this->dva->Location = System::Drawing::Point(650, 437);
			this->dva->Name = L"dva";
			this->dva->Size = System::Drawing::Size(75, 48);
			this->dva->TabIndex = 41;
			this->dva->Text = L"2";
			this->dva->UseVisualStyleBackColor = false;
			this->dva->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// odin
			// 
			this->odin->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->odin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->odin->ForeColor = System::Drawing::Color::White;
			this->odin->Location = System::Drawing::Point(569, 437);
			this->odin->Name = L"odin";
			this->odin->Size = System::Drawing::Size(75, 48);
			this->odin->TabIndex = 40;
			this->odin->Text = L"1";
			this->odin->UseVisualStyleBackColor = false;
			this->odin->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// ravno
			// 
			this->ravno->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ravno->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ravno->ForeColor = System::Drawing::Color::White;
			this->ravno->Location = System::Drawing::Point(893, 437);
			this->ravno->Name = L"ravno";
			this->ravno->Size = System::Drawing::Size(75, 102);
			this->ravno->TabIndex = 53;
			this->ravno->Text = L"=";
			this->ravno->UseVisualStyleBackColor = false;
			this->ravno->Click += gcnew System::EventHandler(this, &MyForm::btn_result_Click);
			// 
			// mod
			// 
			this->mod->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->mod->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mod->ForeColor = System::Drawing::Color::White;
			this->mod->Location = System::Drawing::Point(893, 383);
			this->mod->Name = L"mod";
			this->mod->Size = System::Drawing::Size(75, 48);
			this->mod->TabIndex = 51;
			this->mod->Text = L"mod";
			this->mod->UseVisualStyleBackColor = false;
			// 
			// abs
			// 
			this->abs->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->abs->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->abs->ForeColor = System::Drawing::Color::White;
			this->abs->Location = System::Drawing::Point(893, 329);
			this->abs->Name = L"abs";
			this->abs->Size = System::Drawing::Size(75, 48);
			this->abs->TabIndex = 50;
			this->abs->Text = L"abs";
			this->abs->UseVisualStyleBackColor = false;
			// 
			// AC
			// 
			this->AC->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->AC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AC->ForeColor = System::Drawing::Color::White;
			this->AC->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AC.Image")));
			this->AC->Location = System::Drawing::Point(893, 275);
			this->AC->Name = L"AC";
			this->AC->Size = System::Drawing::Size(75, 48);
			this->AC->TabIndex = 49;
			this->AC->Text = L"AC";
			this->AC->UseVisualStyleBackColor = false;
			// 
			// Mminus
			// 
			this->Mminus->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Mminus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Mminus->ForeColor = System::Drawing::Color::White;
			this->Mminus->Location = System::Drawing::Point(893, 209);
			this->Mminus->Name = L"Mminus";
			this->Mminus->Size = System::Drawing::Size(75, 48);
			this->Mminus->TabIndex = 48;
			this->Mminus->Text = L"M-";
			this->Mminus->UseVisualStyleBackColor = false;
			// 
			// label_result
			// 
			this->label_result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_result->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label_result.Image")));
			this->label_result->Location = System::Drawing::Point(90, 55);
			this->label_result->Name = L"label_result";
			this->label_result->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label_result->Size = System::Drawing::Size(878, 95);
			this->label_result->TabIndex = 54;
			this->label_result->Text = L"0";
			this->label_result->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::GrayText;
			this->label2->Enabled = false;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(715, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(253, 46);
			this->label2->TabIndex = 55;
			this->label2->Text = L"Инженерный калькулятор";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GrayText;
			this->ClientSize = System::Drawing::Size(1016, 662);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label_result);
			this->Controls->Add(this->ravno);
			this->Controls->Add(this->mod);
			this->Controls->Add(this->abs);
			this->Controls->Add(this->AC);
			this->Controls->Add(this->Mminus);
			this->Controls->Add(this->nol);
			this->Controls->Add(this->tochka);
			this->Controls->Add(this->plusminus);
			this->Controls->Add(this->plus);
			this->Controls->Add(this->minus);
			this->Controls->Add(this->tri);
			this->Controls->Add(this->dva);
			this->Controls->Add(this->odin);
			this->Controls->Add(this->chetri);
			this->Controls->Add(this->pat);
			this->Controls->Add(this->shest);
			this->Controls->Add(this->button36);
			this->Controls->Add(this->delit);
			this->Controls->Add(this->devat);
			this->Controls->Add(this->vosem);
			this->Controls->Add(this->sem);
			this->Controls->Add(this->skobkalevo);
			this->Controls->Add(this->tocka1);
			this->Controls->Add(this->skobkaprava);
			this->Controls->Add(this->strelka);
			this->Controls->Add(this->Mplus);
			this->Controls->Add(this->MS);
			this->Controls->Add(this->MR);
			this->Controls->Add(this->MC);
			this->Controls->Add(this->tanh);
			this->Controls->Add(this->tanh1);
			this->Controls->Add(this->Xten);
			this->Controls->Add(this->yX);
			this->Controls->Add(this->Xkor);
			this->Controls->Add(this->logyX);
			this->Controls->Add(this->cash1);
			this->Controls->Add(this->cash);
			this->Controls->Add(this->senh);
			this->Controls->Add(this->senh1);
			this->Controls->Add(this->lag);
			this->Controls->Add(this->xiy);
			this->Controls->Add(this->xx3);
			this->Controls->Add(this->en);
			this->Controls->Add(this->taan1);
			this->Controls->Add(this->taan);
			this->Controls->Add(this->kos);
			this->Controls->Add(this->kos1);
			this->Controls->Add(this->ix);
			this->Controls->Add(this->x2);
			this->Controls->Add(this->n1);
			this->Controls->Add(this->Pi);
			this->Controls->Add(this->cin1);
			this->Controls->Add(this->cin);
			this->Name = L"MyForm";
			this->ResumeLayout(false);

		}

#pragma endregion


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Button^ btn = safe_cast<Button^>(sender);
		if (this->label_result->Text == "0" || check)
		{
			this->label_result->Text = btn->Text;
			check = false;
		}
		else
			this->label_result->Text += btn->Text;
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e)
	{
	}
private: System::Void P314(System::Object^ sender, System::EventArgs^ e)
{
	this->label_result->Text = "3.14";
}


private: System::Void btn_plus_Click(System::Object^ sender, System::EventArgs^ e)
{
	math_action('+');
}
private: System::Void btn_minus_Click(System::Object^ sender, System::EventArgs^ e)
{
	math_action('-');
}
private: System::Void btn_mult_Click(System::Object^ sender, System::EventArgs^ e)
{
	math_action('*');
}
private: System::Void btn_del_Click(System::Object^ sender, System::EventArgs^ e)
{
	math_action('/');
}
private: System::Void btn_result_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->second_nmb = Convert::ToInt32(this->label_result->Text);
	switch (action)
	{
	case '+': this->label_result->Text = Convert::ToString((double)this->first_nmb + (double)this->second_nmb); break; 
	case '-': this->label_result->Text = Convert::ToString((double)this->first_nmb - (double)this->second_nmb); break;
	case '*': this->label_result->Text = Convert::ToString((double)this->first_nmb * (double)this->second_nmb); break;
	case '/': this->label_result->Text = Convert::ToString((double)this->first_nmb / (double)this->second_nmb); break;
	default:
		break;
	}
	this->check = true;
}
	private: System::Void math_action(char action)
	{
		this->first_nmb = Convert::ToDouble(this->label_result->Text);
		this->label_result->Text = "0";
		this->action = action;
	}

};
}