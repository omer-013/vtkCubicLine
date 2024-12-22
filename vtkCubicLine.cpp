#include <vtkSmartPointer.h>
#include <vtkCubicLine.h>
#include <vtkCellArray.h>
#include <vtkPoints.h>
#include <vtkCellData.h>
#include <vtkDoubleArray.h>
#include <vtkDataArray.h>

int main() {
    // 1. vtkCubicLine nesnesini oluşturun
    vtkSmartPointer<vtkCubicLine> cubicLine = vtkSmartPointer<vtkCubicLine>::New();

    // 2. Parametrik koordinatlar ve hücre verileri için yer tutucular
    double pcoords[3] = { 0.0, 0.0, 0.0 };  // Parametric coordinates
    double weights[4];  // Interpolasyon ağırlıkları

    // 3. Interpolasyon fonksiyonlarını hesapla
    cubicLine->InterpolateFunctions(pcoords, weights);

    // 4. Diğer işlemler
    // Kesme işlemi, interpolasyon ve benzeri fonksiyonlar burada kullanılabilir

    // 5. Sonuçları yazdır
    std::cout << "Interpolated weights: ";
    for (int i = 0; i < 4; ++i) {
        std::cout << weights[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
