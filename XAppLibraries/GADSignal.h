//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADSignal_h
#define GADSignal_h
@import Foundation;

@class NSObject, NSString;

@interface GADSignal : NSObject

@property (readonly, nonatomic) NSString *requestIdentifier;
@property (readonly, nonatomic) NSString *signalString;

/* instance methods */
- (id)initWithSignalString:(id)string requestIdentifier:(id)identifier;

@end

#endif /* GADSignal_h */
