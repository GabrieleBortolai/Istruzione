#include <iostream>
#include <TGraph.h>
#include <TApplication.h>
#include <TPad.h>
#include <TAxis.h>
#include <TRandom3.h>
#include <chrono>
#include <thread>
#include <TPad.h>
#include <TSystem.h>

using namespace std;
using namespace std::chrono;
using namespace std::this_thread;

int main(){

  TGraph gr;
  TApplication app("app",0 , NULL);
  TRandom3 rnd(time(NULL));

  int x=6,y=6,i=3,j=3,n=0;

  gr.SetMarkerStyle(20);
  gr.SetMaximum(x);
  gr.SetMinimum(0);
  gr.GetXaxis()->SetLimits(0,x);
  
  gr.SetPoint(0,2,3);//food
  gr.SetPoint(1,3,3);//ant
  gr.Draw("AP");

  
  for(int k=0; k<10; k++ ){
    
    double r=rnd.Rndm();

     if(r<0.25){//right
       
      gr.SetPoint(1,i+1,4);
      gr.GetXaxis()->SetLimits(0,x);
      gPad->Modified();
      gPad->Update();
      gSystem->ProcessEvents();
      sleep_for(seconds(1));
      i++;
      
       }
     
     else if(r>0.26 && r<0.5){//left

      gr.SetPoint(1,i-1,4);
      gr.GetXaxis()->SetLimits(0,x);
      gPad->Modified();
      gPad->Update();
      gSystem->ProcessEvents();
      sleep_for(seconds(1));
      i--;

      }

     else if(r>0.51 && r<0.75){//up

      gr.SetPoint(1,3,j+1);
      gr.GetXaxis()->SetLimits(0,x);
      gPad->Modified();
      gPad->Update();
      gSystem->ProcessEvents();
      sleep_for(seconds(1));
      j++;

  }
     else if(r>0.76){//down

      gr.SetPoint(1,3,j-1);
      gr.GetXaxis()->SetLimits(0,x);
      gPad->Modified();
      gPad->Update();
      gSystem->ProcessEvents();
      sleep_for(seconds(1));
      j--;

      }

     if(i==0 || j==0 || i==6 || j==6){ break; }
   }
  gPad->Update();
  app.Run(true);
  return 0;

}

