/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTMergeRegionMap : TSPObject {
    struct unordered_map<TSUCellCoord, TSUCellCoord, std::__1::hash<TSUCellCoord>, std::__1::equal_to<TSUCellCoord>, std::__1::allocator<std::__1::pair<const TSUCellCoord, TSUCellCoord> > > { 
        struct __hash_table<std::__1::__hash_value_type<TSUCellCoord, TSUCellCoord>, std::__1::__unordered_map_hasher<TSUCellCoord, std::__1::__hash_value_type<TSUCellCoord, TSUCellCoord>, std::__1::hash<TSUCellCoord>, true>, std::__1::__unordered_map_equal<TSUCellCoord, std::__1::__hash_value_type<TSUCellCoord, TSUCellCoord>, std::__1::equal_to<TSUCellCoord>, true>, std::__1::allocator<std::__1::__hash_value_type<TSUCellCoord, TSUCellCoord> > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> *> *> > { 
                            unsigned long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<TSUCellCoord, std::__1::__hash_value_type<TSUCellCoord, TSUCellCoord>, std::__1::hash<TSUCellCoord>, true> > { 
                unsigned long __first_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<TSUCellCoord, std::__1::__hash_value_type<TSUCellCoord, TSUCellCoord>, std::__1::equal_to<TSUCellCoord>, true> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    }  mCellIDToMergeOrigin;
    struct unordered_map<TSUCellCoord, TSUColumnRowSize, std::__1::hash<TSUCellCoord>, std::__1::equal_to<TSUCellCoord>, std::__1::allocator<std::__1::pair<const TSUCellCoord, TSUColumnRowSize> > > { 
        struct __hash_table<std::__1::__hash_value_type<TSUCellCoord, TSUColumnRowSize>, std::__1::__unordered_map_hasher<TSUCellCoord, std::__1::__hash_value_type<TSUCellCoord, TSUColumnRowSize>, std::__1::hash<TSUCellCoord>, true>, std::__1::__unordered_map_equal<TSUCellCoord, std::__1::__hash_value_type<TSUCellCoord, TSUColumnRowSize>, std::__1::equal_to<TSUCellCoord>, true>, std::__1::allocator<std::__1::__hash_value_type<TSUCellCoord, TSUColumnRowSize> > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSUColumnRowSize>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSUColumnRowSize>, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSUColumnRowSize>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSUColumnRowSize>, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSUColumnRowSize>, void *> *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSUColumnRowSize>, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSUColumnRowSize>, void *> *> *> > { 
                            unsigned long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSUColumnRowSize>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSUColumnRowSize>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSUColumnRowSize>, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSUColumnRowSize>, void *> *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<TSUCellCoord, std::__1::__hash_value_type<TSUCellCoord, TSUColumnRowSize>, std::__1::hash<TSUCellCoord>, true> > { 
                unsigned long __first_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<TSUCellCoord, std::__1::__hash_value_type<TSUCellCoord, TSUColumnRowSize>, std::__1::equal_to<TSUCellCoord>, true> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    }  mMergeOriginToSize;
    struct TSUCellRect { 
        struct TSUCellCoord { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } origin; 
        struct { 
            unsigned short numberOfColumns; 
            unsigned short numberOfRows; 
        } size; 
    }  mUnionedMergeRange;
}

+ (id)mergeRegionMapFromMap:(id)arg1 intersectingRange:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2;
+ (id)mergeRegionMapWithContext:(id)arg1 andCellRanges:(const struct vector<TSUCellRect, std::__1::allocator<TSUCellRect> > { struct TSUCellRect {} *x1; struct TSUCellRect {} *x2; struct __compressed_pair<TSUCellRect *, std::__1::allocator<TSUCellRect> > { struct TSUCellRect {} *x_3_1_1; } x3; }*)arg2;
+ (id)mergeRegionMapWithContext:(id)arg1 andCellRangesSet:(const struct unordered_set<TSUCellRect, std::__1::hash<TSUCellRect>, std::__1::equal_to<TSUCellRect>, std::__1::allocator<TSUCellRect> > { struct __hash_table<TSUCellRect, std::__1::hash<TSUCellRect>, std::__1::equal_to<TSUCellRect>, std::__1::allocator<TSUCellRect> > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<TSUCellRect, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSUCellRect, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<TSUCellRect, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSUCellRect, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<TSUCellRect, void *> *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSUCellRect, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSUCellRect, void *> *> *> > { unsigned long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<TSUCellRect, void *> *>, std::__1::allocator<std::__1::__hash_node<TSUCellRect, void *> > > { struct __hash_node_base<std::__1::__hash_node<TSUCellRect, void *> *> { struct __hash_node_base<std::__1::__hash_node<TSUCellRect, void *> *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; } x1; }*)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (const struct unordered_map<TSUCellCoord, TSUCellCoord, std::__1::hash<TSUCellCoord>, std::__1::equal_to<TSUCellCoord>, std::__1::allocator<std::__1::pair<const TSUCellCoord, TSUCellCoord> > > { struct __hash_table<std::__1::__hash_value_type<TSUCellCoord, TSUCellCoord>, std::__1::__unordered_map_hasher<TSUCellCoord, std::__1::__hash_value_type<TSUCellCoord, TSUCellCoord>, std::__1::hash<TSUCellCoord>, true>, std::__1::__unordered_map_equal<TSUCellCoord, std::__1::__hash_value_type<TSUCellCoord, TSUCellCoord>, std::__1::equal_to<TSUCellCoord>, true>, std::__1::allocator<std::__1::__hash_value_type<TSUCellCoord, TSUCellCoord> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> *> *> > { unsigned long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; } x1; }*)cellIDToMergeOrigin;
- (unsigned int)count;
- (void)enumerateRangesUsingBlock:(id /* block */)arg1;
- (BOOL)find:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (BOOL)hasRangeSpanningRows;
- (id)initFromUnarchiver:(id)arg1;
- (id)initRegionMapFromMap:(id)arg1 intersectingRange:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2;
- (id)initRegionMapFromMap:(id)arg1 rowRemapping:(id)arg2;
- (id)initWithContext:(id)arg1;
- (BOOL)insert:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (id)iterator;
- (const struct unordered_map<TSUCellCoord, TSUColumnRowSize, std::__1::hash<TSUCellCoord>, std::__1::equal_to<TSUCellCoord>, std::__1::allocator<std::__1::pair<const TSUCellCoord, TSUColumnRowSize> > > { struct __hash_table<std::__1::__hash_value_type<TSUCellCoord, TSUColumnRowSize>, std::__1::__unordered_map_hasher<TSUCellCoord, std::__1::__hash_value_type<TSUCellCoord, TSUColumnRowSize>, std::__1::hash<TSUCellCoord>, true>, std::__1::__unordered_map_equal<TSUCellCoord, std::__1::__hash_value_type<TSUCellCoord, TSUColumnRowSize>, std::__1::equal_to<TSUCellCoord>, true>, std::__1::allocator<std::__1::__hash_value_type<TSUCellCoord, TSUColumnRowSize> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSUColumnRowSize>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSUColumnRowSize>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSUColumnRowSize>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSUColumnRowSize>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSUColumnRowSize>, void *> *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSUColumnRowSize>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSUColumnRowSize>, void *> *> *> > { unsigned long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; } x1; }*)mergeOriginToSize;
- (struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })mergedRangeForCellID:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (BOOL)remove:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (void)saveToArchiver:(id)arg1;

@end
