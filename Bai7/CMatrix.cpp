#include "CMatrix.h"

CMatrix::CMatrix(int d,int c){
    m=d; n=c;

    a = new float*[m];
    for(int i=0;i<m;i++){
        a[i] = new float[n];
        for(int j=0;j<n;j++) a[i][j]=0;
    }
}

CMatrix::~CMatrix(){
    for(int i=0;i<m;i++) delete[] a[i];
    delete[] a;
}

void CMatrix::nhap(){
    cout << "Nhap dong: ";
    cin >> m;
    cout << "Nhap cot: ";
    cin >> n;

    a = new float*[m];

    for(int i=0;i<m;i++){
        a[i] = new float[n];
        for(int j=0;j<n;j++){
            cout << "a["<<i<<"]["<<j<<"] = ";
            cin >> a[i][j];
        }
    }
}

void CMatrix::xuat(){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

// Nhan ma tran - vector
CVector CMatrix::nhanVector(const CVector& v){

    CVector kq(m);

    for(int i=0;i<m;i++){
        float sum=0;

        for(int j=0;j<n;j++){
            sum += a[i][j] * v.get(j);
        }

        kq.set(i,sum);
    }

    return kq;
}

// Nhan ma tran - ma tran
CMatrix CMatrix::nhanMaTran(const CMatrix& b){

    CMatrix kq(m,b.n);

    for(int i=0;i<m;i++){
        for(int j=0;j<b.n;j++){

            float sum=0;

            for(int k=0;k<n;k++){
                sum += a[i][k] * b.a[k][j];
            }

            kq.a[i][j]=sum;
        }
    }

    return kq;
}
