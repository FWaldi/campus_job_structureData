#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
#include <stack>
#include <queue>

void tampilkanMainMenu()
{
    std::cout << "=======================================================================" << std::endl;
    std::cout << "Pilih Program" << std::endl;
    std::cout << "=======================================================================" << std::endl;
    std::cout << "1. Program Pengeditan Data" << std::endl;
    std::cout << "2. Simulasi Data" << std::endl;
    std::cout << "3. Sorting & Search" << std::endl;
    std::cout << "4. Menampilkan Data" << std::endl;
    std::cout << "=======================================================================" << std::endl;
    std::cout << "5. Keluar" << std::endl;
    std::cout << "=======================================================================" << std::endl;
}

void tampilkanProgramPengeditanDataMenu()
{
    std::cout << "=======================================================================" << std::endl;
    std::cout << "Program Pengeditan Data" << std::endl;
    std::cout << "=======================================================================" << std::endl;
    std::cout << "1. Input Data" << std::endl;
    std::cout << "2. Hapus Data" << std::endl;
    std::cout << "0. Kembali ke menu Pilih Program" << std::endl;
    std::cout << "=======================================================================" << std::endl;
}

void tampilkanProgramSimulasiDataMenu()
{
    std::cout << "=======================================================================" << std::endl;
    std::cout << "Simulasi Data" << std::endl;
    std::cout << "=======================================================================" << std::endl;
    std::cout << "1. Stack Linked List" << std::endl;
    std::cout << "2. Queue Double Linked List" << std::endl;
    std::cout << "0. Kembali ke menu Pilih Program" << std::endl;
    std::cout << "=======================================================================" << std::endl;
}

void tampilkanProgramSortingSearchMenu()
{
    std::cout << "=======================================================================" << std::endl;
    std::cout << "Sorting & Search" << std::endl;
    std::cout << "=======================================================================" << std::endl;
    std::cout << "1. Sorting" << std::endl;
    std::cout << "2. Search" << std::endl;
    std::cout << "0. Kembali ke menu Pilih Program" << std::endl;
    std::cout << "=======================================================================" << std::endl;
}

void tampilkanProgramMenampilkanDataMenu()
{
    std::cout << "=======================================================================" << std::endl;
    std::cout << "Menampilkan Data" << std::endl;
    std::cout << "=======================================================================" << std::endl;
    std::cout << "1. Tampilkan Data Stack" << std::endl;
    std::cout << "2. Tampilkan Data Queue" << std::endl;
    std::cout << "0. Kembali ke menu Pilih Program" << std::endl;
    std::cout << "=======================================================================" << std::endl;
}

void inputData(std::vector<int>& data)
{
    int input;
    std::cout << "Masukkan data: ";
    std::cin >> input;
    data.push_back(input);
    std::cout << "Data berhasil dimasukkan!" << std::endl;
}

void hapusData(std::vector<int>& data)
{
    if (data.empty())
    {
        std::cout << "Data kosong!" << std::endl;
        return;
    }

    int index;
    std::cout << "Masukkan indeks data yang akan dihapus: ";
    std::cin >> index;

    if (index < 0 || index >= data.size())
    {
        std::cout << "Indeks data tidak valid!" << std::endl;
        return;
    }

    data.erase(data.begin() + index);
    std::cout << "Data berhasil dihapus!" << std::endl;
}


void tampilkanData(const std::vector<int>& data)
{
    if (data.empty())
    {
    std::cout << "Data kosong!" << std::endl;
    return;
    }std::cout << "Data sebelum diurutkan: ";
    for (const auto& item : data)
    {
        std::cout << item << " ";
    }
    std::cout << std::endl;

    std::vector<int> sortedData = data;
    std::sort(sortedData.begin(), sortedData.end());

    std::cout << "Data setelah diurutkan: ";
    for (const auto& item : sortedData)
    {
        std::cout << item << " ";
    }
    std::cout << std::endl;
}

void stackLinkedListSimulation()
{
    std::stack<int> stack;

    while (true)
    {
        std::cout << "=======================================================================" << std::endl;
        std::cout << "Stack Linked List" << std::endl;
        std::cout << "=======================================================================" << std::endl;
        std::cout << "1. Push" << std::endl;
        std::cout << "2. Pop" << std::endl;
        std::cout << "0. Kembali ke menu Simulasi Data" << std::endl;
        std::cout << "=======================================================================" << std::endl;

        int choice;
        std::cout << "Pilih operasi: ";
        std::cin >> choice;

        switch (choice)
        {
            case 1:
            {
                int data;
                std::cout << "Masukkan data: ";
                std::cin >> data;
                stack.push(data);
                std::cout << "Data berhasil ditambahkan ke dalam stack!" << std::endl;
                break;
            }
            case 2:
            {
                if (stack.empty())
                {
                    std::cout << "Stack kosong!" << std::endl;
                }
                else
                {
                    int data = stack.top();
                    stack.pop();
                    std::cout << "Data " << data << " berhasil dihapus dari stack!" << std::endl;
                }
                break;
            }
            case 0:
                return;
            default:
                std::cout << "Pilihan tidak valid!" << std::endl;
                break;
        }
    }
}

void queueDoubleLinkedListSimulation()
{
    std::queue<int> queue;

    while (true)
    {
        std::cout << "=======================================================================" << std::endl;
        std::cout << "Queue Double Linked List" << std::endl;
        std::cout << "=======================================================================" << std::endl;
        std::cout << "1. Enqueue" << std::endl;
        std::cout << "2. Dequeue" << std::endl;
        std::cout << "0. Kembali ke menu Simulasi Data" << std::endl;
        std::cout << "=======================================================================" << std::endl;

        int choice;
        std::cout << "Pilih operasi: ";
        std::cin >> choice;

        switch (choice)
        {
            case 1:
            {
                int data;
                std::cout << "Masukkan data: ";
                std::cin >> data;
                queue.push(data);
                std::cout << "Data berhasil ditambahkan ke dalam queue!" << std::endl;
                break;
            }
            case 2:
            {
                if (queue.empty())
                {
                    std::cout << "Queue kosong!" << std::endl;
                }
                else
                {
                    int data = queue.front();
                    queue.pop();
                    std::cout << "Data " << data << " berhasil dihapus dari queue!" << std::endl;
                }
                break;
            }
            case 0:
                return;
            default:
                std::cout << "Pilihan tidak valid!" << std::endl;
                break;
        }
    }
}

void sorting()
{
    std::vector<int> data;

    while (true)
    {
        std::cout << "=======================================================================" << std::endl;
        std::cout << "Sorting" << std::endl;
        std::cout << "=======================================================================" << std::endl;
        std::cout << "1. Input Data" << std::endl;
        std::cout << "2. Bubble Sort" << std::endl;
        std::cout << "3. Selection Sort" << std::endl;
        std::cout << "4. Insertion Sort" << std::endl;
        std::cout << "0. Kembali ke menu Sorting & Search" << std::endl;
        std::cout << "=======================================================================" << std::endl;

        int choice;
        std::cout << "Pilih operasi: ";
        std::cin >> choice;

        switch (choice)
        {
            case 1:
                inputData(data);
                break;
            case 2:
                std::sort(data.begin(), data.end());
                std::cout << "Data berhasil diurutkan menggunakan Bubble Sort!" << std::endl;
                break;
            case 3:
                std::sort(data.begin(), data.end(), std::greater<int>());
                std::cout << "Data berhasil diurutkan menggunakan Selection Sort!" << std::endl;
                break;
            case 4:
                std::sort(data.begin(), data.end());
                std::cout << "Data berhasil diurutkan menggunakan Insertion Sort!" << std::endl;
                break;
            case 0:
                return;
            default:
                std::cout << "Pilihan tidak valid!" << std::endl;
                break;
        }
    }
}

void search(const std::vector<int>& data)
{
    if (data.empty())
    {
        std::cout << "Data kosong!" << std::endl;
        return;
    }

    int key;
    std::cout << "Masukkan angka yang ingin dicari: ";
    std::cin >> key;

    auto it = std::find(data.begin(), data.end(), key);
    if (it != data.end())
    {
        int index = std::distance(data.begin(), it);
        std::cout << "Angka " << key << " ditemukan pada indeks " << index << "!" << std::endl;
    }
    else
    {
        std::cout << "Angka " << key << " tidak ditemukan dalam data!" << std::endl;
    }
}

int main()
{
    std::vector<int> data;

    std::cout << "=======================================================================" << std::endl;
    std::cout << "SELAMAT DATANG PADA PROGRAM SIMULASI STRUKTUR DATA" << std::endl;
    std::cout << "=======================================================================" << std::endl;
    std::cout << "=======================================================================" << std::endl;
    std::cout << "Pemogram\t: Fitri Waldi" << std::endl;
    std::cout << "NIM\t\t\t: 22343021" << std::endl;
    std::cout << "Program Tugas Akhir Struktur Data" << std::endl;
    std::cout << "=======================================================================" << std::endl;

    while (true)
    {
        tampilkanMainMenu();

        int choice;
        std::cout << "Pilih program: ";
        std::cin >> choice;

        switch (choice)
        {
            case 1:
                while (true)
                {
                    tampilkanProgramPengeditanDataMenu();

                    int subChoice;
                    std::cout << "Pilih operasi: ";
                    std::cin >> subChoice;

                    switch (subChoice)
                    {
                        case 1:
                            inputData(data);
                            break;
                        case 2:
                            hapusData(data);
                            break;
                        case 0:
                            break;
                        default:
                            std::cout << "Pilihan tidak valid!" << std::endl;
                            break;
                    }

                    if (subChoice == 0)
                    {
                        break;
                    }
                }
                break;
            case 2:
                while (true)
                {
                    tampilkanProgramSimulasiDataMenu();

                    int subChoice;
                    std::cout << "Pilih operasi: ";
                    std::cin >> subChoice;

                    switch (subChoice)
                    {
                        case 1:
                            stackLinkedListSimulation();
                            break;
                        case 2:
                            queueDoubleLinkedListSimulation();
                            break;
                        case 0:
                            break;
                        default:
                            std::cout << "Pilihan tidak valid!" << std::endl;
                            break;
                    }

                    if (subChoice == 0)
                    {
                        break;
                    }
                }
                break;
            case 3:
                while (true)
                {
                    tampilkanProgramSortingSearchMenu();

                    int subChoice;
                    std::cout << "Pilih operasi: ";
                    std::cin >> subChoice;

                    switch (subChoice)
                    {
                        case 1:
                            sorting();
                            break;
                        case 2:
                            search(data);
                            break;
                        case 0:
                            break;
                        default:
                            std::cout << "Pilihan tidak valid!" << std::endl;
                            break;
                    }

                    if (subChoice == 0)
                    {
                        break;
                    }
                }
                break;
            case 4:
                while (true)
                {
                    tampilkanProgramMenampilkanDataMenu();

                    int subChoice;
                    std::cout << "Pilih operasi: ";
                    std::cin >> subChoice;

                    switch (subChoice)
                    {
                        case 1:
                            tampilkanData(data);
                            break;
                        case 2:
                            tampilkanData(data);
                            break;
                        case 0:
                            break;
                        default:
                            std::cout << "Pilihan tidak valid!" << std::endl;
                            break;
                    }

                    if (subChoice == 0)
                    {
                        break;
                    }
                }
                break;
            case 5:
                std::cout << "=======================================================================" << std::endl;
                std::cout << "Terima kasih telah menggunakan program ini. Sampai jumpa!" << std::endl;
                std::cout << "=======================================================================" << std::endl;
                return 0;
            default:
                std::cout << "Pilihan tidak valid!" << std::endl;
                break;
        }
    }
}
