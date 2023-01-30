#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_mC405D19505CA250B5C731803400D8DAF963F0DCD (void);
// 0x00000002 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_mEC48ECB89552B91EFD9669763848BA1DB97E991D (void);
// 0x00000003 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mE25C4D4F2FE86A32704624613D751BE305953E49 (void);
// 0x00000004 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000005 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000006 System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x00000007 System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x00000008 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000009 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000A TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000B TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000000C System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000D System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000000E System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000F System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000010 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000011 System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x00000012 TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x00000013 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x00000014 System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000015 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000016 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000017 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000018 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000019 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000001A System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x0000001B System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001C System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x0000001D System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x0000001E System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x0000001F System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000020 System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x00000021 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x00000022 System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000023 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000024 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000025 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000026 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000027 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000028 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000029 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x0000002A System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000002B System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x0000002C System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x0000002D System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000002E System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000002F System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x00000030 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x00000031 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x00000032 System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x00000033 TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x00000034 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x00000035 System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x00000036 System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000037 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000038 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x00000039 System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x0000003A System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x0000003B System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x0000003C System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x0000003D System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x0000003E System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x0000003F System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x00000040 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x00000041 TElement[] System.Linq.Buffer`1::ToArray()
// 0x00000042 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x00000043 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x00000044 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000045 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x00000046 System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x00000047 System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x00000048 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x00000049 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x0000004A System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x0000004B System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x0000004C System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x0000004D System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x0000004E System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000004F System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000050 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x00000051 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x00000052 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x00000053 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x00000054 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x00000055 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x00000056 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x00000057 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x00000058 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x00000059 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x0000005A System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x0000005B System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x0000005C T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x0000005D System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x0000005E System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[94] = 
{
	Error_ArgumentNull_mC405D19505CA250B5C731803400D8DAF963F0DCD,
	Error_MoreThanOneMatch_mEC48ECB89552B91EFD9669763848BA1DB97E991D,
	Error_NoElements_mE25C4D4F2FE86A32704624613D751BE305953E49,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[94] = 
{
	2891,
	3057,
	3057,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[27] = 
{
	{ 0x02000004, { 43, 4 } },
	{ 0x02000005, { 47, 9 } },
	{ 0x02000006, { 56, 7 } },
	{ 0x02000007, { 63, 10 } },
	{ 0x02000008, { 73, 1 } },
	{ 0x0200000A, { 74, 3 } },
	{ 0x0200000B, { 79, 5 } },
	{ 0x0200000C, { 84, 7 } },
	{ 0x0200000D, { 91, 3 } },
	{ 0x0200000E, { 94, 7 } },
	{ 0x0200000F, { 101, 4 } },
	{ 0x02000010, { 105, 21 } },
	{ 0x02000012, { 126, 2 } },
	{ 0x06000004, { 0, 10 } },
	{ 0x06000005, { 10, 5 } },
	{ 0x06000006, { 15, 2 } },
	{ 0x06000007, { 17, 1 } },
	{ 0x06000008, { 18, 3 } },
	{ 0x06000009, { 21, 2 } },
	{ 0x0600000A, { 23, 4 } },
	{ 0x0600000B, { 27, 3 } },
	{ 0x0600000C, { 30, 1 } },
	{ 0x0600000D, { 31, 3 } },
	{ 0x0600000E, { 34, 2 } },
	{ 0x0600000F, { 36, 2 } },
	{ 0x06000010, { 38, 5 } },
	{ 0x0600002E, { 77, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[128] = 
{
	{ (Il2CppRGCTXDataType)2, 1310 },
	{ (Il2CppRGCTXDataType)3, 6540 },
	{ (Il2CppRGCTXDataType)2, 2293 },
	{ (Il2CppRGCTXDataType)2, 1918 },
	{ (Il2CppRGCTXDataType)3, 10892 },
	{ (Il2CppRGCTXDataType)2, 1396 },
	{ (Il2CppRGCTXDataType)2, 1922 },
	{ (Il2CppRGCTXDataType)3, 10905 },
	{ (Il2CppRGCTXDataType)2, 1920 },
	{ (Il2CppRGCTXDataType)3, 10898 },
	{ (Il2CppRGCTXDataType)2, 460 },
	{ (Il2CppRGCTXDataType)3, 19 },
	{ (Il2CppRGCTXDataType)3, 20 },
	{ (Il2CppRGCTXDataType)2, 881 },
	{ (Il2CppRGCTXDataType)3, 4930 },
	{ (Il2CppRGCTXDataType)2, 1655 },
	{ (Il2CppRGCTXDataType)3, 8920 },
	{ (Il2CppRGCTXDataType)3, 5545 },
	{ (Il2CppRGCTXDataType)2, 538 },
	{ (Il2CppRGCTXDataType)3, 565 },
	{ (Il2CppRGCTXDataType)3, 566 },
	{ (Il2CppRGCTXDataType)2, 1397 },
	{ (Il2CppRGCTXDataType)3, 6996 },
	{ (Il2CppRGCTXDataType)2, 1243 },
	{ (Il2CppRGCTXDataType)2, 953 },
	{ (Il2CppRGCTXDataType)2, 1042 },
	{ (Il2CppRGCTXDataType)2, 1096 },
	{ (Il2CppRGCTXDataType)2, 1043 },
	{ (Il2CppRGCTXDataType)2, 1097 },
	{ (Il2CppRGCTXDataType)3, 4931 },
	{ (Il2CppRGCTXDataType)2, 1035 },
	{ (Il2CppRGCTXDataType)2, 1036 },
	{ (Il2CppRGCTXDataType)2, 1094 },
	{ (Il2CppRGCTXDataType)3, 4929 },
	{ (Il2CppRGCTXDataType)2, 952 },
	{ (Il2CppRGCTXDataType)2, 1041 },
	{ (Il2CppRGCTXDataType)2, 951 },
	{ (Il2CppRGCTXDataType)3, 12533 },
	{ (Il2CppRGCTXDataType)3, 4570 },
	{ (Il2CppRGCTXDataType)2, 791 },
	{ (Il2CppRGCTXDataType)2, 1038 },
	{ (Il2CppRGCTXDataType)2, 1095 },
	{ (Il2CppRGCTXDataType)2, 1147 },
	{ (Il2CppRGCTXDataType)3, 6541 },
	{ (Il2CppRGCTXDataType)3, 6543 },
	{ (Il2CppRGCTXDataType)2, 333 },
	{ (Il2CppRGCTXDataType)3, 6542 },
	{ (Il2CppRGCTXDataType)3, 6551 },
	{ (Il2CppRGCTXDataType)2, 1313 },
	{ (Il2CppRGCTXDataType)2, 1921 },
	{ (Il2CppRGCTXDataType)3, 10899 },
	{ (Il2CppRGCTXDataType)3, 6552 },
	{ (Il2CppRGCTXDataType)2, 1067 },
	{ (Il2CppRGCTXDataType)2, 1115 },
	{ (Il2CppRGCTXDataType)3, 4936 },
	{ (Il2CppRGCTXDataType)3, 12528 },
	{ (Il2CppRGCTXDataType)3, 6544 },
	{ (Il2CppRGCTXDataType)2, 1312 },
	{ (Il2CppRGCTXDataType)2, 1919 },
	{ (Il2CppRGCTXDataType)3, 10893 },
	{ (Il2CppRGCTXDataType)3, 4935 },
	{ (Il2CppRGCTXDataType)3, 6545 },
	{ (Il2CppRGCTXDataType)3, 12527 },
	{ (Il2CppRGCTXDataType)3, 6558 },
	{ (Il2CppRGCTXDataType)2, 1314 },
	{ (Il2CppRGCTXDataType)2, 1923 },
	{ (Il2CppRGCTXDataType)3, 10906 },
	{ (Il2CppRGCTXDataType)3, 7034 },
	{ (Il2CppRGCTXDataType)3, 3981 },
	{ (Il2CppRGCTXDataType)3, 4937 },
	{ (Il2CppRGCTXDataType)3, 3980 },
	{ (Il2CppRGCTXDataType)3, 6559 },
	{ (Il2CppRGCTXDataType)3, 12529 },
	{ (Il2CppRGCTXDataType)3, 4934 },
	{ (Il2CppRGCTXDataType)2, 463 },
	{ (Il2CppRGCTXDataType)3, 28 },
	{ (Il2CppRGCTXDataType)3, 8907 },
	{ (Il2CppRGCTXDataType)2, 1656 },
	{ (Il2CppRGCTXDataType)3, 8921 },
	{ (Il2CppRGCTXDataType)2, 539 },
	{ (Il2CppRGCTXDataType)3, 567 },
	{ (Il2CppRGCTXDataType)3, 8913 },
	{ (Il2CppRGCTXDataType)3, 3960 },
	{ (Il2CppRGCTXDataType)2, 349 },
	{ (Il2CppRGCTXDataType)3, 8908 },
	{ (Il2CppRGCTXDataType)2, 1652 },
	{ (Il2CppRGCTXDataType)3, 971 },
	{ (Il2CppRGCTXDataType)2, 556 },
	{ (Il2CppRGCTXDataType)2, 778 },
	{ (Il2CppRGCTXDataType)3, 3966 },
	{ (Il2CppRGCTXDataType)3, 8909 },
	{ (Il2CppRGCTXDataType)3, 3955 },
	{ (Il2CppRGCTXDataType)3, 3956 },
	{ (Il2CppRGCTXDataType)3, 3954 },
	{ (Il2CppRGCTXDataType)3, 3957 },
	{ (Il2CppRGCTXDataType)2, 774 },
	{ (Il2CppRGCTXDataType)2, 2354 },
	{ (Il2CppRGCTXDataType)3, 4933 },
	{ (Il2CppRGCTXDataType)3, 3959 },
	{ (Il2CppRGCTXDataType)2, 1019 },
	{ (Il2CppRGCTXDataType)3, 3958 },
	{ (Il2CppRGCTXDataType)2, 954 },
	{ (Il2CppRGCTXDataType)2, 2317 },
	{ (Il2CppRGCTXDataType)2, 1046 },
	{ (Il2CppRGCTXDataType)2, 1098 },
	{ (Il2CppRGCTXDataType)3, 4589 },
	{ (Il2CppRGCTXDataType)2, 800 },
	{ (Il2CppRGCTXDataType)3, 5425 },
	{ (Il2CppRGCTXDataType)3, 5426 },
	{ (Il2CppRGCTXDataType)3, 5431 },
	{ (Il2CppRGCTXDataType)2, 1155 },
	{ (Il2CppRGCTXDataType)3, 5428 },
	{ (Il2CppRGCTXDataType)3, 12785 },
	{ (Il2CppRGCTXDataType)2, 779 },
	{ (Il2CppRGCTXDataType)3, 3975 },
	{ (Il2CppRGCTXDataType)1, 1016 },
	{ (Il2CppRGCTXDataType)2, 2325 },
	{ (Il2CppRGCTXDataType)3, 5427 },
	{ (Il2CppRGCTXDataType)1, 2325 },
	{ (Il2CppRGCTXDataType)1, 1155 },
	{ (Il2CppRGCTXDataType)2, 2371 },
	{ (Il2CppRGCTXDataType)2, 2325 },
	{ (Il2CppRGCTXDataType)3, 5432 },
	{ (Il2CppRGCTXDataType)3, 5430 },
	{ (Il2CppRGCTXDataType)3, 5429 },
	{ (Il2CppRGCTXDataType)2, 234 },
	{ (Il2CppRGCTXDataType)3, 3982 },
	{ (Il2CppRGCTXDataType)2, 339 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	94,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	27,
	s_rgctxIndices,
	128,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
