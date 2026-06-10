
            #!/bin/bash
            clear  # Clear the terminal screen at the start
            cd "c:\Users\mayan\Downloads\ragecp\cpprac"
            if [ -f 2179B ]; then
                rm 2179B  # Remove the old binary if it exists
            fi
            g++ -o 2179B 2179B.cpp
            if [ $? -eq 0 ]; then
                ./2179B
            else
                echo "Compilation failed."
            fi
            echo ""  # Add a newline for better separation
            rm "c:\Users\mayan\Downloads\ragecp\cpprac\.2179B_run.sh"
        