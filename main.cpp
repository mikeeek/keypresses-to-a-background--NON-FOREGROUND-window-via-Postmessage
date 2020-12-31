#include <windows.h>
#include <iostream>
#include <chrono>
#include <thread>



int main()
{
    std::cout << "Welcome!\n Let me AFK honor for you while you relax\n";
    HWND wowhandle = FindWindow(TEXT("GxWindowClass"), NULL);

        if (!wowhandle)
            std::cout << "WoW window was not found!\n";
        else
        {
            

            while (1) 
            {   
             

                int time = rand() % 78000 + 80000;   
               
                Sleep(time);
              

                char ch = 'b';
                short vkCode = LOBYTE(VkKeyScan(ch));

                
                auto lParam = MapVirtualKey(vkCode, MAPVK_VK_TO_VSC);

                PostMessage(wowhandle, WM_KEYDOWN, vkCode, lParam);

                Sleep(200);

                PostMessage(wowhandle, WM_KEYUP, vkCode, lParam);
                
                std::cout << "ANTI-AFK sent to the game\n";
                std::cout << "Randomized time\n  " << time;
                

            }
        }
    
    std::cin.get();
   
}