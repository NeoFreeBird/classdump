//
#ifndef GADNullableRenderResultArray_h
#define GADNullableRenderResultArray_h
@import Foundation;

@class NSMutableArray, NSObject;

@interface GADNullableRenderResultArray : NSObject {
    /* instance variables */
    NSMutableArray *_array;
}

@property (readonly, nonatomic) unsigned long long count;

/* instance methods */
- (id)initWithSize:(unsigned long long)size;
- (id)renderResultAtIndex:(unsigned long long)index;
- (void)setRenderResult:(id)result atIndex:(unsigned long long)index;

@end

#endif /* GADNullableRenderResultArray_h */
