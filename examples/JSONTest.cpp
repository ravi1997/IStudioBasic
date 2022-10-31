#include <IStudio/IStudio.hpp>


int main()
{

    using namespace std;
    using namespace IStudio;
    using namespace IStudio::Lang;
    using namespace IStudio::Util;
    using namespace boost::ut;

    ////////////////////////////////////////////////////////


    "Boolean"_test = [] {
        Boolean b;
        expect(b == Boolean::FALSE);
    };

    "Double"_test = [] {
        Double d1;
        Double d2 = 10.0;
        expect(d1 != d2);
        expect(d1 < d2);
        expect(d1 <= d2);
        expect(d2 > d1);
        expect(d2 >= d1);
        expect(d1 == d1);
    };

    "Integer"_test = [] {
        Integer d1;
        Integer d2 = 10;
        expect(d1 != d2);
        expect(d1 < d2);
        expect(d1 <= d2);
        expect(d2 > d1);
        expect(d2 >= d1);
        expect(d1 == d1);
    };

    "SharedPtr"_test = [] {
        SharedPtr<Integer> s = SharedPtr<Integer>::makeShared(10);
    }; 
    return 0; 
}
