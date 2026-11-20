//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADOMIDPartner_h
#define GADOMIDPartner_h
@import Foundation;

@class NSObject, NSString;

@interface GADOMIDPartner : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *versionString;

/* instance methods */
- (id)initWithName:(id)name versionString:(id)string;
- (id)toJSON;

@end

#endif /* GADOMIDPartner_h */
