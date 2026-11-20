//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTokenEntryLink_h
#define TFNTokenEntryLink_h
@import Foundation;

@class NSObject, NSString;

@interface TFNTokenEntryLink : NSObject

@property (retain, nonatomic) NSString *token;
@property (nonatomic) unsigned long long entryIndex;

/* instance methods */
- (id)initWithToken:(id)token entryIndex:(unsigned long long)index;
- (long long)compare:(id)compare;

@end

#endif /* TFNTokenEntryLink_h */
