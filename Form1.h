#pragma once
#include <Windows.h>
#include <time.h>
#include "Resourse.h"
#include "Process.h"
#include <math.h>




namespace WinForm {

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

			Size = Size1 = Size2 = 0; // Baslangýcta örnek yok.
			p = NULL;
			w = NULL;
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
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ processToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ initToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::RadioButton^ check_Class1;
	private: System::Windows::Forms::RadioButton^ check_Class2;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		
		
		Samples* p ; // örneklerimizi alýyoruz.
		int Size, Size1, Size2; //class1 class2 ve tüm örnek sayýsý.
		double* w;
		int E;
		float c;

		// Normalizasyon parametreleri
		float m1, m2;
		float s1, s2;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ToolStripMenuItem^ randomlyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ perceptronToolStripMenuItem;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ToolStripMenuItem^ deltaLearnToolStripMenuItem;



		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->processToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->initToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->randomlyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->perceptronToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deltaLearnToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->check_Class1 = (gcnew System::Windows::Forms::RadioButton());
			this->check_Class2 = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->processToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(838, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// processToolStripMenuItem
			// 
			this->processToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->initToolStripMenuItem });
			this->processToolStripMenuItem->Name = L"processToolStripMenuItem";
			this->processToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->processToolStripMenuItem->Text = L"Process";
			// 
			// initToolStripMenuItem
			// 
			this->initToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->randomlyToolStripMenuItem,
					this->perceptronToolStripMenuItem, this->deltaLearnToolStripMenuItem
			});
			this->initToolStripMenuItem->Name = L"initToolStripMenuItem";
			this->initToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->initToolStripMenuItem->Text = L"initial";
			// 
			// randomlyToolStripMenuItem
			// 
			this->randomlyToolStripMenuItem->Name = L"randomlyToolStripMenuItem";
			this->randomlyToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->randomlyToolStripMenuItem->Text = L"Randomly";
			this->randomlyToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::randomlyToolStripMenuItem_Click);
			// 
			// perceptronToolStripMenuItem
			// 
			this->perceptronToolStripMenuItem->Name = L"perceptronToolStripMenuItem";
			this->perceptronToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->perceptronToolStripMenuItem->Text = L"Perceptron";
			this->perceptronToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::perceptronToolStripMenuItem_Click);
			// 
			// deltaLearnToolStripMenuItem
			// 
			this->deltaLearnToolStripMenuItem->Name = L"deltaLearnToolStripMenuItem";
			this->deltaLearnToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->deltaLearnToolStripMenuItem->Text = L"DeltaLearn";
			this->deltaLearnToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::deltaLearnToolStripMenuItem_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->pictureBox1->Location = System::Drawing::Point(35, 27);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(494, 415);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::pictureBox1_Paint);
			this->pictureBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::pictureBox1_MouseClick);
			// 
			// check_Class1
			// 
			this->check_Class1->AutoSize = true;
			this->check_Class1->Checked = true;
			this->check_Class1->Location = System::Drawing::Point(583, 61);
			this->check_Class1->Name = L"check_Class1";
			this->check_Class1->Size = System::Drawing::Size(55, 17);
			this->check_Class1->TabIndex = 2;
			this->check_Class1->TabStop = true;
			this->check_Class1->Text = L"class1";
			this->check_Class1->UseVisualStyleBackColor = true;
			// 
			// check_Class2
			// 
			this->check_Class2->AutoSize = true;
			this->check_Class2->Location = System::Drawing::Point(583, 102);
			this->check_Class2->Name = L"check_Class2";
			this->check_Class2->Size = System::Drawing::Size(55, 17);
			this->check_Class2->TabIndex = 3;
			this->check_Class2->Text = L"class2";
			this->check_Class2->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(580, 184);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(583, 259);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(704, 61);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"label3";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(838, 497);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->check_Class2);
			this->Controls->Add(this->check_Class1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

		//Ana eksen dogrularý cizdir.

		Pen^ pen = gcnew Pen(Color::Black, 1.0f);
		int center_width, center_height;
		center_width = (int)(pictureBox1->Width / 2);
		center_height = (int)(pictureBox1->Height / 2);
		e->Graphics->DrawLine(pen, center_width, 0, center_width, pictureBox1->Height);
		e->Graphics->DrawLine(pen, 0, center_height, pictureBox1->Width, center_height);

	}
	private: System::Void pictureBox1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		//mouseclick
		if (check_Class1->Checked ^ check_Class2->Checked)
		{
			Pen^ pen = check_Class1->Checked ? gcnew Pen(Color::Black, 2.0f) : gcnew Pen(Color::Red, 2.0f);
			int temp_x, temp_y;
			float x1, x2;
			temp_x = (System::Convert::ToInt32(e->X));
			temp_y = (System::Convert::ToInt32(e->Y));
			x1 = (float)(temp_x - (pictureBox1->Width / 2));
			x2 = (float)((pictureBox1->Height / 2) - temp_y);


			if (Size == 0)
			{
				Size = (check_Class1->Checked ? Size1 : Size2) = 1;
				p = new Samples[1];
				p[0].x1 = x1;
				p[0].x2 = x2;
				p[0].id = check_Class1->Checked ? CLASS1 : CLASS2;
			}
			else
			{
				Samples* temp; //data lar temp de tutuluyor.
				temp = p;
				check_Class1->Checked ? Size1++ : Size2++;
				Size++;// += check_Class1->Checked ? Size1 : Size2;
				p = new Samples[Size];	//yenibellek alaný actýk.
				for (int i = 0; i < Size - 1; i++)		//sonuncu eleman için yer açtýk fakat sonuncu eleman temp içinde yok (Size -1).
				{
					p[i].x1 = temp[i].x1;
					p[i].x2 = temp[i].x2;
					p[i].id = temp[i].id;
				}
				p[Size - 1].x1 = x1;
				p[Size - 1].x2 = x2;
				p[Size - 1].id = check_Class1->Checked ? CLASS1 : CLASS2;
				delete temp;
			}

			label1->Text = "x1: " + Convert::ToString(p[Size - 1].x1) + "\nx2: " + Convert::ToString(p[Size - 1].x2);
			pictureBox1->CreateGraphics()->DrawLine(pen, temp_x - 5, temp_y, temp_x + 5, temp_y);
			pictureBox1->CreateGraphics()->DrawLine(pen, temp_x, temp_y - 5, temp_x, temp_y + 5);
			label2->Text = "\nSamples Total: " + Convert::ToString(Size) + "\nClass1: " + Convert::ToString(Size1) + "\nClass2: " + Convert::ToString(Size2);


		}

	}
    private: System::Void randomlyToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		Pen^ pen = gcnew Pen(Color::Blue, 2.0f);

		int min_x, min_y, max_x, max_y;
		int Dim = 2;  // 2D FEATURE SPACE
		w = new double[Dim + 1];
		srand(time(0));

		for (int i = 0; i < Dim + 1; i++)
		{
			w[i] = ((double)rand() / (RAND_MAX));
		}

		label1->Text = "w[0]: " + Convert::ToString(w[0]) + "\nw[1]: " + Convert::ToString(w[1]) + "\nw[2]: " + Convert::ToString(w[2]);
		min_x = (this->pictureBox1->Width) / (-2);
		min_y = YPoint(min_x, w);
		max_x = (this->pictureBox1->Width) / 2 ;
		max_y = YPoint(max_x, w);
		pictureBox1->CreateGraphics()->DrawLine(pen, (pictureBox1->Width / 2) + min_x, (pictureBox1->Height / 2) - min_y,
												(pictureBox1->Width / 2) + max_x, (pictureBox1->Height / 2) - max_y);


    }
	
	private: System::Void perceptronToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		Pen^ pen = gcnew Pen(Color::Green, 2.0f);
		Graphics^ GFX = pictureBox1->CreateGraphics();
	
		int min_x, min_y, max_x, max_y;
		min_x = (this->pictureBox1->Width) / (-2);
		max_x = (this->pictureBox1->Width) / 2;

		float net;
		float o;
		c = 0.5;
		int E = 50;		//rastgele buyuk bir deger..
		int cycle = 0;

		while (E > 0)
		{
			E = 0;
			net = 0;
			
			for (int i = 0; i < Size; i++)
			{

				net = w[0] * p[i].x1 + w[1] * p[i].x2 + w[2]*BIAS;
				o = sgnFunc(net);

				w[0] += c * (p[i].id - o) * p[i].x1;		//c*(d-o)*x
				w[1] += c * (p[i].id - o) * p[i].x2;
				w[2] += c * (p[i].id - o) * BIAS;

				// E <-- E + 0.5*(d-o)*(d-o)
				E += 0.5 * (p[i].id - o) * (p[i].id - o);


			}

			//  Aðýrlýklar (w) ile doðruyu çiz
			//UpdateFeatureSpace();
			/*
			//her bir çizilen doðruyu göster.
			min_y = YPoint((min_x - m1) / s1, w) * s2 + m2; // Normalize x ler ile hesaplanan y ler normalize ölçekte..
			max_y = YPoint((max_x - m1) / s1, w) * s2 + m2; // Ters normalizasyon ile y leri kendi ölçeðine geri dönderdik

			GFX->DrawLine(pen2, (pictureBox1->Width / 2) + min_x, (pictureBox1->Height / 2) - min_y,
				(pictureBox1->Width / 2) + max_x, (pictureBox1->Height / 2) - max_y);
			*/

			++cycle;	//N post-increment : sonradan artýr : bi sonraki eriþimde artýrýlmýþ hali kullanýlýr
		}

		label1->Text = "w[0]: " + Convert::ToString(w[0]) + "\nw[1]: " + Convert::ToString(w[1]) + "\nw[2]: " + Convert::ToString(w[2]);
		UpdateFeatureSpace();

		//  Aðýrlýklar (w) ile doðruyu çiz
		min_y = YPoint(min_x, w);
		max_y = YPoint(max_x, w);

		GFX->DrawLine(pen, (pictureBox1->Width / 2) + min_x, (pictureBox1->Height / 2) - min_y,
			(pictureBox1->Width / 2) + max_x, (pictureBox1->Height / 2) - max_y);

		label3->Text = "cyle : " + Convert::ToString(cycle); 
		
	}
	private: System::Void deltaLearnToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {


		//net = w * x1;
		// O = f(net) =  (2 / (1 + pow(e, (-net)) ) - 1)
		//f'(net) = 0.5 * [ 1 - (f(net)^2) ]	
		//Güncellenmis Agýrlýk = w1 + c [d - o ] * f'(net) * x1
		// E += 0.5 * ( d - f(net) )^2 ;
		//Toplam E < epsilon ise egitim sonlanýr.
	
		Graphics^ GFX = pictureBox1->CreateGraphics();
		Pen^ pen2 = gcnew Pen(Color::Green, 2.0f);
		int min_x, min_y, max_x, max_y;
		min_x = (this->pictureBox1->Width) / (-2);
		max_x = (this->pictureBox1->Width) / 2;

		float c = 0.001;
		float net;
		int cycle = 0;
		float E = 50;		//Hata
		float o;		//f(net)
		float turev_o;	//f'(net)
		float tolerans = 0.05; // tolerans

		calcMeans();
		calcStds();

		while (E > tolerans)
		{
			E = 0;
			
			for (int i = 0; i < Size; i++)
			{
				net = 0;
				net = w[0] * ((p[i].x1 - m1) / s1) + w[1] * ((p[i].x2 - m2) / s2) + w[2] * BIAS;
				o = deltaSgnFunc(net);
				turev_o = 0.5 * (1 - o * o);

				w[0] += c * (p[i].id - o) * turev_o * ( (p[i].x1 - m1) / s1);		//c * (d-o) *  f(net)^2*  x
				w[1] += c * (p[i].id - o) * turev_o * ( (p[i].x2 - m2) / s2);
				w[2] += c * (p[i].id - o) * turev_o * BIAS;

				E += 0.5 * (p[i].id - o) * (p[i].id - o);

			}

			++cycle;
			
		}
		
		label1->Text = "w[0]: " + Convert::ToString(w[0]) + "\nw[1]: " + Convert::ToString(w[1]) + "\nw[2]: " + Convert::ToString(w[2]);
		UpdateFeatureSpace();
		//  Aðýrlýklar (w) ile doðruyu çiz
		min_y = YPoint((min_x - m1) / s1, w) * s2 + m2;
		max_y = YPoint((max_x - m1) / s1, w) * s2 + m2;

		
		GFX->DrawLine(pen2, (pictureBox1->Width / 2) + min_x, (pictureBox1->Height / 2) - min_y,
							(pictureBox1->Width / 2) + max_x, (pictureBox1->Height / 2) - max_y);

		label3->Text = "cyle : " + Convert::ToString(cycle);

	}


	public: void UpdateFeatureSpace()
	{
		 // Variables:
		 Graphics^ GFX = pictureBox1->CreateGraphics();
		 

		 // 1 - Kanvasý sýfýrla sil

		GFX->Clear(pictureBox1->BackColor);

 	     // 2 - Eksenleri çiz
		 Pen^ pen = gcnew Pen(Color::Black, 1.0f);
		 int center_width, center_height;
		 center_width = (int)(pictureBox1->Width / 2);
		 center_height = (int)(pictureBox1->Height / 2);
	     GFX->DrawLine(pen, center_width, 0, center_width, pictureBox1->Height);
	     GFX->DrawLine(pen, 0, center_height, pictureBox1->Width, center_height);

		 // 3 - Örnekleri çiz (p ile)
		 pen->Width = 2.0f;
		 for (int i = 0; i < Size; i++)
		 {
			  pen->Color = (p[i].id == CLASS1) ? Color::Black : Color::Red;

			  GFX->DrawLine(pen, (pictureBox1->Width / 2) + p[i].x1 - 5, (pictureBox1->Height / 2) - p[i].x2, 
							     (pictureBox1->Width / 2) + p[i].x1 + 5, (pictureBox1->Height / 2) - p[i].x2);

			  GFX->DrawLine(pen, (pictureBox1->Width / 2) + p[i].x1, (pictureBox1->Height / 2) - p[i].x2 - 5,
						         (pictureBox1->Width / 2) + p[i].x1, (pictureBox1->Height / 2) - p[i].x2 + 5);

		 }

		 

	 }

	public: void calcMeans()
	{
		float total1, total2;

		for (size_t i = 0; i < Size; i++)
		{
			total1 += p[i].x1;
			total2 += p[i].x2;
		}

		this->m1 = total1 / Size;
		this->m2 = total2 / Size;

	}

	public: void calcStds()
	{
		// m1 , m2 biliniyor...
		/*
		Vi = Xi - m
		V : vektörel

		variance = V'V / N
		std = sqrt(variance)
		*/
		float sqSum1 = 0;
		float sqSum2 = 0;

		for (size_t i = 0; i < Size; i++)
		{
			sqSum1 += (p[i].x1 - m1) * (p[i].x1 - m1);
			sqSum2 += (p[i].x2 - m2) * (p[i].x2 - m2);
		}

		this->s1 = sqrtf(sqSum1) / Size;
		this->s2 = sqrtf(sqSum2) / Size;
	}
	


};
}
