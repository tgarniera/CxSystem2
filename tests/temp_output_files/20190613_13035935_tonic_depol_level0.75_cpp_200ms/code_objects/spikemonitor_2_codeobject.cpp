#include "objects.h"
#include "code_objects/spikemonitor_2_codeobject.h"
#include "brianlib/common_math.h"
#include "brianlib/stdint_compat.h"
#include<cmath>
#include<ctime>
#include<iostream>
#include<fstream>
#include<climits>

////// SUPPORT CODE ///////
namespace {
 	
 template < typename T1, typename T2 > struct _higher_type;
 template < > struct _higher_type<int,int> { typedef int type; };
 template < > struct _higher_type<int,long> { typedef long type; };
 template < > struct _higher_type<int,long long> { typedef long long type; };
 template < > struct _higher_type<int,float> { typedef float type; };
 template < > struct _higher_type<int,double> { typedef double type; };
 template < > struct _higher_type<int,long double> { typedef long double type; };
 template < > struct _higher_type<long,int> { typedef long type; };
 template < > struct _higher_type<long,long> { typedef long type; };
 template < > struct _higher_type<long,long long> { typedef long long type; };
 template < > struct _higher_type<long,float> { typedef float type; };
 template < > struct _higher_type<long,double> { typedef double type; };
 template < > struct _higher_type<long,long double> { typedef long double type; };
 template < > struct _higher_type<long long,int> { typedef long long type; };
 template < > struct _higher_type<long long,long> { typedef long long type; };
 template < > struct _higher_type<long long,long long> { typedef long long type; };
 template < > struct _higher_type<long long,float> { typedef float type; };
 template < > struct _higher_type<long long,double> { typedef double type; };
 template < > struct _higher_type<long long,long double> { typedef long double type; };
 template < > struct _higher_type<float,int> { typedef float type; };
 template < > struct _higher_type<float,long> { typedef float type; };
 template < > struct _higher_type<float,long long> { typedef float type; };
 template < > struct _higher_type<float,float> { typedef float type; };
 template < > struct _higher_type<float,double> { typedef double type; };
 template < > struct _higher_type<float,long double> { typedef long double type; };
 template < > struct _higher_type<double,int> { typedef double type; };
 template < > struct _higher_type<double,long> { typedef double type; };
 template < > struct _higher_type<double,long long> { typedef double type; };
 template < > struct _higher_type<double,float> { typedef double type; };
 template < > struct _higher_type<double,double> { typedef double type; };
 template < > struct _higher_type<double,long double> { typedef long double type; };
 template < > struct _higher_type<long double,int> { typedef long double type; };
 template < > struct _higher_type<long double,long> { typedef long double type; };
 template < > struct _higher_type<long double,long long> { typedef long double type; };
 template < > struct _higher_type<long double,float> { typedef long double type; };
 template < > struct _higher_type<long double,double> { typedef long double type; };
 template < > struct _higher_type<long double,long double> { typedef long double type; };
 template < typename T1, typename T2 >
 static inline typename _higher_type<T1,T2>::type
 _brian_mod(T1 x, T2 y)
 {{
     return x-y*floor(1.0*x/y);
 }}
 template < typename T1, typename T2 >
 static inline typename _higher_type<T1,T2>::type
 _brian_floordiv(T1 x, T2 y)
 {{
     return floor(1.0*x/y);
 }}
 #ifdef _MSC_VER
 #define _brian_pow(x, y) (pow((double)(x), (y)))
 #else
 #define _brian_pow(x, y) (pow((x), (y)))
 #endif

}

////// HASH DEFINES ///////



void _run_spikemonitor_2_codeobject()
{
	using namespace brian;

    const std::clock_t _start_time = std::clock();

	///// CONSTANTS ///////////
	const int _numN = 1;
const int _numcount = 109;
const int _num_clock_t = 1;
double* const _array_spikemonitor_2_t = _dynamic_array_spikemonitor_2_t.empty()? 0 : &_dynamic_array_spikemonitor_2_t[0];
const int _numt = _dynamic_array_spikemonitor_2_t.size();
const int _num_source_t = 1;
int32_t* const _array_spikemonitor_2_i = _dynamic_array_spikemonitor_2_i.empty()? 0 : &_dynamic_array_spikemonitor_2_i[0];
const int _numi = _dynamic_array_spikemonitor_2_i.size();
const int _num_spikespace = 110;
const int _num_source_i = 109;
const int _num_source_idx = 109;
	///// POINTERS ////////////
 	
 int32_t*   _ptr_array_spikemonitor_2_N = _array_spikemonitor_2_N;
 int32_t* __restrict  _ptr_array_spikemonitor_2_count = _array_spikemonitor_2_count;
 double*   _ptr_array_defaultclock_t = _array_defaultclock_t;
 double* __restrict  _ptr_array_spikemonitor_2_t = _array_spikemonitor_2_t;
 int32_t* __restrict  _ptr_array_spikemonitor_2_i = _array_spikemonitor_2_i;
 int32_t* __restrict  _ptr_array_neurongroup_2__spikespace = _array_neurongroup_2__spikespace;
 int32_t* __restrict  _ptr_array_neurongroup_2_i = _array_neurongroup_2_i;
 int32_t* __restrict  _ptr_array_spikemonitor_2__source_idx = _array_spikemonitor_2__source_idx;


	//// MAIN CODE ////////////

	int32_t _num_events = _ptr_array_neurongroup_2__spikespace[_num_spikespace-1];

    if (_num_events > 0)
    {
        int _start_idx = _num_events;
        int _end_idx = _num_events;
        for(int _j=0; _j<_num_events; _j++)
        {
            const int _idx = _ptr_array_neurongroup_2__spikespace[_j];
            if (_idx >= 0) {
                _start_idx = _j;
                break;
            }
        }
        for(int _j=_num_events-1; _j>=_start_idx; _j--)
        {
            const int _idx = _ptr_array_neurongroup_2__spikespace[_j];
            if (_idx < 109) {
                break;
            }
            _end_idx = _j;
        }
        _num_events = _end_idx - _start_idx;
        if (_num_events > 0) {
             const int _vectorisation_idx = 1;
                        
            const double _source_t = _ptr_array_defaultclock_t[0];

            for(int _j=_start_idx; _j<_end_idx; _j++)
            {
                const int _idx = _ptr_array_neurongroup_2__spikespace[_j];
                const int _vectorisation_idx = _idx;
                                
                const int32_t _source_i = _ptr_array_neurongroup_2_i[_idx];
                const int32_t _to_record_i = _source_i;
                const double _to_record_t = _source_t;

                _dynamic_array_spikemonitor_2_i.push_back(_to_record_i);
                _dynamic_array_spikemonitor_2_t.push_back(_to_record_t);
                _ptr_array_spikemonitor_2_count[_idx-0]++;
            }
            _ptr_array_spikemonitor_2_N[0] += _num_events;
        }
    }


    const double _run_time = (double)(std::clock() -_start_time)/CLOCKS_PER_SEC;
    spikemonitor_2_codeobject_profiling_info += _run_time;
}

void _debugmsg_spikemonitor_2_codeobject()
{
	using namespace brian;
    const int _numN = 1;
const int _numcount = 109;
const int _num_clock_t = 1;
double* const _array_spikemonitor_2_t = _dynamic_array_spikemonitor_2_t.empty()? 0 : &_dynamic_array_spikemonitor_2_t[0];
const int _numt = _dynamic_array_spikemonitor_2_t.size();
const int _num_source_t = 1;
int32_t* const _array_spikemonitor_2_i = _dynamic_array_spikemonitor_2_i.empty()? 0 : &_dynamic_array_spikemonitor_2_i[0];
const int _numi = _dynamic_array_spikemonitor_2_i.size();
const int _num_spikespace = 110;
const int _num_source_i = 109;
const int _num_source_idx = 109;
        
    int32_t*   _ptr_array_spikemonitor_2_N = _array_spikemonitor_2_N;
    int32_t* __restrict  _ptr_array_spikemonitor_2_count = _array_spikemonitor_2_count;
    double*   _ptr_array_defaultclock_t = _array_defaultclock_t;
    double* __restrict  _ptr_array_spikemonitor_2_t = _array_spikemonitor_2_t;
    int32_t* __restrict  _ptr_array_spikemonitor_2_i = _array_spikemonitor_2_i;
    int32_t* __restrict  _ptr_array_neurongroup_2__spikespace = _array_neurongroup_2__spikespace;
    int32_t* __restrict  _ptr_array_neurongroup_2_i = _array_neurongroup_2_i;
    int32_t* __restrict  _ptr_array_spikemonitor_2__source_idx = _array_spikemonitor_2__source_idx;

	std::cout << "Number of spikes: " << _ptr_array_spikemonitor_2_N[0] << endl;
}

