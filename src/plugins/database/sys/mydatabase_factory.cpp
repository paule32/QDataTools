// --------------------------------------------------------------------------------
// MIT License
//
// Copyright (c) 2020 Jens Kallup
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
// --------------------------------------------------------------------------------
#include "mydatabase_factory.h"
#include "mydatabase.h"

namespace mdb
{
    MyDataBaseSession * MyDataBaseFactory::create(
        dbType type,
        dbDriver driver)
    {
        MyDataBaseSession * session = nullptr;
        switch (type) {
            case dbType::dbaseTable:{
                session = new MyDataTable;
                session->setDriver(driver);
                session->setHost("127.0.0.1");

                if (driver == dbDriver::mysql)
                session->setPort(3361);
                break;
            }
            case dbType::dbaseSQL:{
                session = new MyDataSQL;
                session->setDriver(driver);
                session->setHost("127.0.0.1");

                if (driver == dbDriver::mysql)
                session->setPort(3361);
                break;
            }
            default:{
                return nullptr;
            }
        }
        return session;
    }

    void testung()
    {
        MyDataBaseSession * session_A = MyDataBaseFactory::create(dbType::dbaseTable);
        MyDataBaseSession * session_B = MyDataBaseFactory::create(dbType::dbaseTable);

        session_A->setHost("127.0.0.1");
        session_A->setPort(80);

        MyDataTable * table_a1 = new MyDataTable;
        table_a1->open(session_A);
        MyDataTable * table_a2 = new MyDataTable;
        table_a2->open(session_A);
        // ------------------------
        MyDataTable * table_b1 = new MyDataTable;
        table_a2->open(session_B);
        MyDataTable * table_b2 = new MyDataTable;
        table_b2->open(session_B);


        session_A->close();
        session_B->close();
    }
}   // namespace: mdb
