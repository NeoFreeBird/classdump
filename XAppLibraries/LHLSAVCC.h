//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef LHLSAVCC_h
#define LHLSAVCC_h
@import Foundation;

@class NSData, NSObject;

@interface LHLSAVCC : NSObject {
    /* instance variables */
    struct AVCC { unsigned long long _lengthSize; unsigned long long _firstSPSSize; unsigned long long _firstPPSSize; char *_firstSPS; char *_firstPPS; } _avcc;
}

@property (readonly, nonatomic) int lengthSize;
@property (readonly, nonatomic) NSData *firstSPS;
@property (readonly, nonatomic) NSData *firstPPS;

/* instance methods */
- (id)initWithData:(id)data;

@end

#endif /* LHLSAVCC_h */
