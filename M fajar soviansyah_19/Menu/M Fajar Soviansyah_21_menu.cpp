#include<iostream>
using namespace std;
char lagi;
char y;
int pilihan,jtopup,pilih,idplay,idsrvr,byr;

int main(){
    menu_utama:
        system ("cls");
            cout<<"        SELAMAT DATANG DI CODASHOP          "<<endl;
            cout<<""<<endl;
            cout<< "==============================\n";
            cout<< "|      CODASHOP TOPUP        |\n";
            cout<< "==============================\n";
            cout<< "|     1.Mobile Legends       |\n";
            cout<< "==============================\n";
 ulangi:
     cout<< "masukkan pilihan anda : ";
     cin>>pilihan;

     switch(pilihan){
         case 1:
         cout<<"Game Mobile Legends"<<endl;
         cout<<""<<endl;
         cout<< "Masukkan ID Player anda!"<<endl;
         cout<< "ID Player: "<<endl;cin>>idplay;
         cout<<"ID Server :";cin>>idsrvr;
    cout<< "================================\n";
    cout<<"Masukkan jumlah Topup anda (1-4)!"<<endl;
    cout<<"1. Rp.50.000 =  350 diamond!"<<endl;
    cout<<"2. Rp.100.000 = 720 diamond!"<<endl;
    cout<<"3. Rp.200.000 = 1.450 diamond!"<<endl;
    cout<<"4. Rp.300.000 = 2.180 diamond!"<<endl;
    cout<< "================================\n";
    cout<<"Masukkan jumlah Topup anda : ";cin>>jtopup;
    cout<<"=================================\n"<<endl;
    cout<<"    Masukkan Metode Pembayaran     "<<endl;
    cout<<" 1.OVO                             "<<endl;
    cout<<" 2.GoPay                           "<<endl;
    cout<<" 3.DANA                            "<<endl;
    cout<<"=================================\n"<<endl;
    cout<<"Pilih Metode pembayaran :";cin>>byr;
    switch (byr)
    {
    case 1:
    if (jtopup==1)
    {
            cout<< "selamat anda telah berhasil topup"<<endl;
            cout<<"--------------------------------------------"<<endl;
            cout<<"Dengan akun  :"<<idplay<<endl;
            cout<<"Id server    :"<<idsrvr<<endl;
            cout<<"--------------------------------------------"<<endl;
            cout<<"jumlah topup :"<<"Rp.50.000 = 350 diamond"<<endl;
            cout<<"--------------------------------------------"<<endl;
            cout<<"Metode pembayaran OVO"<<endl;
            cout<<"\n\n";
            cout<< "Apakah anda puas dengan layanan kami? [y/t]? ";
            cin>>lagi;
            if (lagi == y)
            goto menu_utama;
            else goto keluar;
    }
                if (jtopup==2)
    {
            cout<< "selamat anda telah berhasil topup"<<endl;
            cout<<"--------------------------------------------"<<endl;
            cout<<"Dengan akun  :"<<idplay<<endl;
            cout<<"Id server    :"<<idsrvr<<endl;
            cout<<"--------------------------------------------"<<endl;
            cout<<"jumlah topup :"<<"Rp.100.000 = 720 diamond"<<endl;
            cout<<"--------------------------------------------"<<endl;
            cout<<"Metode pembayaran OVO"<<endl;
            cout<<"\n\n";
            cout<< "Apakah anda puas dengan layanan kami? [y/t]? ";
            cin>>lagi;
            if (lagi == y)
            goto menu_utama;
            else goto keluar;
    }
                    if (jtopup==3)
    {
            cout<< "selamat anda telah berhasil topup"<<endl;
            cout<<"--------------------------------------------"<<endl;
            cout<<"Dengan akun  :"<<idplay<<endl;
            cout<<"Id server    :"<<idsrvr<<endl;
            cout<<"--------------------------------------------"<<endl;
            cout<<"jumlah topup :"<<"Rp.200.000 = 1.450 diamond"<<endl;
            cout<<"--------------------------------------------"<<endl;
            cout<<"Metode pembayaran OVO"<<endl;
            cout<<"\n\n";
            cout<< "Apakah anda puas dengan layanan kami? [y/t]? ";
            cin>>lagi;
            if (lagi == y)
            goto menu_utama;
            else goto keluar;
    }
                    if (jtopup==4)
    {
            cout<< "selamat anda telah berhasil topup"<<endl;
            cout<<"--------------------------------------------"<<endl;
            cout<<"Dengan akun  :"<<idplay<<endl;
            cout<<"Id server    :"<<idsrvr<<endl;
            cout<<"--------------------------------------------"<<endl;
            cout<<"jumlah topup :"<<"Rp.300.000 = 2.180 diamond"<<endl;
            cout<<"--------------------------------------------"<<endl;
            cout<<"Metode pembayaran OVO"<<endl;
            cout<<"\n\n";
            cout<< "Apakah anda puas dengan layanan kami? [y/t]? ";
            cin>>lagi;
            if (lagi == y)
            goto menu_utama;
            else goto keluar;
    }
    break;
    case 2:
    if (jtopup==1)
    {
            cout<< "selamat anda telah berhasil topup"<<endl;
            cout<<"--------------------------------------------"<<endl;
            cout<<"Dengan akun  :"<<idplay<<endl;
            cout<<"Id server    :"<<idsrvr<<endl;
            cout<<"--------------------------------------------"<<endl;
            cout<<"jumlah topup :"<<"Rp.50.000 = 350 diamond"<<endl;
            cout<<"--------------------------------------------"<<endl;
            cout<<"Metode pembayaran GoPay"<<endl;
            cout<<"\n\n";
            cout<< "Apakah anda puas dengan layanan kami? [y/t]? ";
            cin>>lagi;
            if (lagi == y)
            goto menu_utama;
            else goto keluar;
    }
                if (jtopup==2)
    {
            cout<< "selamat anda telah berhasil topup"<<endl;
            cout<<"--------------------------------------------"<<endl;
            cout<<"Dengan akun  :"<<idplay<<endl;
            cout<<"Id server    :"<<idsrvr<<endl;
            cout<<"--------------------------------------------"<<endl;
            cout<<"jumlah topup :"<<"Rp.100.000 = 720 diamond"<<endl;
            cout<<"--------------------------------------------"<<endl;
            cout<<"Metode pembayaran GoPay"<<endl;
            cout<<"\n\n";
            cout<< "Apakah anda puas dengan layanan kami? [y/t]? ";
            cin>>lagi;
            if (lagi == y)
            goto menu_utama;
            else goto keluar;
    }
                    if (jtopup==3)
    {
            cout<< "selamat anda telah berhasil topup"<<endl;
            cout<<"--------------------------------------------"<<endl;
            cout<<"Dengan akun  :"<<idplay<<endl;
            cout<<"Id server    :"<<idsrvr<<endl;
            cout<<"--------------------------------------------"<<endl;
            cout<<"jumlah topup :"<<"Rp.200.000 = 1.450 diamond"<<endl;
            cout<<"--------------------------------------------"<<endl;
            cout<<"Metode pembayaran GoPay"<<endl;
            cout<<"\n\n";
            cout<< "Apakah anda puas dengan layanan kami? [y/t]? ";
            cin>>lagi;
            if (lagi == y)
            goto menu_utama;
            else goto keluar;
    }
                    if (jtopup==4)
    {
            cout<< "selamat anda telah berhasil topup"<<endl;
            cout<<"--------------------------------------------"<<endl;
            cout<<"Dengan akun  :"<<idplay<<endl;
            cout<<"Id server    :"<<idsrvr<<endl;
            cout<<"--------------------------------------------"<<endl;
            cout<<"jumlah topup :"<<"Rp.300.000 = 2.180 diamond"<<endl;
            cout<<"--------------------------------------------"<<endl;
            cout<<"Metode pembayaran GoPay"<<endl;
            cout<<"\n\n";
            cout<< "Apakah anda puas dengan layanan kami? [y/t]? ";
            cin>>lagi;
            if (lagi == y)
            goto menu_utama;
            else goto keluar;
    }

    break;
    case 3:
            if (jtopup==1)
    {
            cout<< "selamat anda telah berhasil topup"<<endl;
            cout<<"--------------------------------------------"<<endl;
            cout<<"Dengan akun  :"<<idplay<<endl;
            cout<<"Id server    :"<<idsrvr<<endl;
            cout<<"--------------------------------------------"<<endl;
            cout<<"jumlah topup :"<<"Rp.50.000 = 350 diamond"<<endl;
            cout<<"--------------------------------------------"<<endl;
            cout<<"Metode pembayaran DANA"<<endl;
            cout<<"\n\n";
            cout<< "Apakah anda puas dengan layanan kami? [y/t]? ";
            cin>>lagi;
            if (lagi == y)
            goto menu_utama;
            else goto keluar;
    }
                if (jtopup==2)
    {
            cout<< "selamat anda telah berhasil topup"<<endl;
            cout<<"--------------------------------------------"<<endl;
            cout<<"Dengan akun  :"<<idplay<<endl;
            cout<<"Id server    :"<<idsrvr<<endl;
            cout<<"--------------------------------------------"<<endl;
            cout<<"jumlah topup :"<<"Rp.100.000 = 720 diamond"<<endl;
            cout<<"--------------------------------------------"<<endl;
            cout<<"Metode pembayaran DANA"<<endl;
            cout<<"\n\n";
            cout<< "Apakah anda puas dengan layanan kami? [y/t]? ";
            cin>>lagi;
            if (lagi == y)
            goto menu_utama;
            else goto keluar;
    }
                    if (jtopup==3)
    {
            cout<< "selamat anda telah berhasil topup"<<endl;
            cout<<"--------------------------------------------"<<endl;
            cout<<"Dengan akun  :"<<idplay<<endl;
            cout<<"Id server    :"<<idsrvr<<endl;
            cout<<"--------------------------------------------"<<endl;
            cout<<"jumlah topup :"<<"Rp.200.000 = 1.450 diamond"<<endl;
            cout<<"--------------------------------------------"<<endl;
            cout<<"Metode pembayaran DANA"<<endl;
            cout<<"\n\n";
            cout<< "Apakah anda puas dengan layanan kami? [y/t]? ";
            cin>>lagi;
            if (lagi == y)
            goto menu_utama;
            else goto keluar;
    }
                    if (jtopup==4)
    {
            cout<< "selamat anda telah berhasil topup"<<endl;
            cout<<"--------------------------------------------"<<endl;
            cout<<"Dengan akun  :"<<idplay<<endl;
            cout<<"Id server    :"<<idsrvr<<endl;
            cout<<"--------------------------------------------"<<endl;
            cout<<"jumlah topup :"<<"Rp.300.000 = 2.180 diamond"<<endl;
            cout<<"--------------------------------------------"<<endl;
            cout<<"Metode pembayaran DANA"<<endl;
            cout<<"\n\n";
            cout<< "Apakah anda puas dengan layanan kami? [y/t]? ";
            cin>>lagi;
            if (lagi == y)
            goto menu_utama;
            else goto keluar;
    }

    break;
    }


    if (jtopup==1)
    {
            cout<< "selamat anda telah berhasil topup"<<endl;
            cout<<"--------------------------------------------"<<endl;
            cout<<"Dengan akun  :"<<idplay<<endl;
            cout<<"Id server    :"<<idsrvr<<endl;
            cout<<"--------------------------------------------"<<endl;
            cout<<"jumlah topup :"<<"Rp.50.000 = 350 diamond"<<endl;
            cout<<"\n\n";
            cout<< "Apakah anda puas dengan layanan kami? [y/t]? ";
            cin>>lagi;
            if (lagi == y)
            goto menu_utama;
            else goto keluar;
    }
                if (jtopup==2)
    {
            cout<< "selamat anda telah berhasil topup"<<endl;
            cout<<"--------------------------------------------"<<endl;
            cout<<"Dengan akun  :"<<idplay<<endl;
            cout<<"Id server    :"<<idsrvr<<endl;
            cout<<"--------------------------------------------"<<endl;
            cout<<"jumlah topup :"<<"Rp.100.000 = 720 diamond"<<endl;
            cout<<"\n\n";
            cout<< "Apakah anda puas dengan layanan kami? [y/t]? ";
            cin>>lagi;
            if (lagi == y)
            goto menu_utama;
            else goto keluar;
    }
                if (jtopup==3)
    {
            cout<< "selamat anda telah berhasil topup"<<endl;
            cout<<"--------------------------------------------"<<endl;
            cout<<"Dengan akun  :"<<idplay<<endl;
            cout<<"Id server    :"<<idsrvr<<endl;
            cout<<"--------------------------------------------"<<endl;
            cout<<"jumlah topup :"<<"Rp.200.000 = 1.450 diamond"<<endl;
            cout<<"\n\n";
            cout<< "Apakah anda puas dengan layanan kami? [y/t]? ";
            cin>>lagi;
            if (lagi == y)
            goto menu_utama;
            else goto keluar;
    }
                if (jtopup==4)
    {
            cout<< "selamat anda telah berhasil topup"<<endl;
            cout<<"--------------------------------------------"<<endl;
            cout<<"Dengan akun  :"<<idplay<<endl;
            cout<<"Id server    :"<<idsrvr<<endl;
            cout<<"--------------------------------------------"<<endl;
            cout<<"jumlah topup :"<<"Rp.300.000 = 2.180 diamond"<<endl;
            cout<<"\n\n";
            cout<< "Apakah anda puas dengan layanan kami? [y/t]? ";
            cin>>lagi;
            if (lagi == y)
            goto menu_utama;
            else goto keluar;
    }
        else
        {
            cout<< "maaf input yang anda masukkan salah, silakan coba lagi \n\n"<<endl;
    goto menu_utama;
        }

    case 4:
  goto keluar;
  default:

     keluar:
            cout<< "\n TERIMA KASIH SUDAH BERTRANSAKSI DI CODASHOP ";
            return 0;
}
}
