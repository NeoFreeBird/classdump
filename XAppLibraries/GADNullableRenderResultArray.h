//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
