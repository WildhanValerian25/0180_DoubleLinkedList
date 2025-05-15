
        switch (choice){
            case '1':
                list.addNode();
                break;
            case '2':
                list.hapus();
                break;
            case '3':
                list.traverse();
                break;
            case '4':
                list.revtraverse();
                break;
            case '5':
                list.searchData();
                break;
            case '6':
                return 0;
            default:
                cout << "invalid option\n";
            }
            cout << "\nPress enter to continue...";
            cin.ignore();
            cin.get();
            cout << endl;
            system("clear");
        } while (choice != '6');
}