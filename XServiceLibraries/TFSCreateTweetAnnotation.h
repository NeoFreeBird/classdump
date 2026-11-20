//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSCreateTweetAnnotation_h
#define TFSCreateTweetAnnotation_h
@import Foundation;

@class NSObject;

@interface TFSCreateTweetAnnotation : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 groupId;
    B24@0:8@"NSString"16 domainId;
    B24@0:8@"NSString"16 entityId;
}

/* class methods */
+ (id)parseSemanticAnnotationIdsWithCommaDelimitedString:(id)string;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TFSCreateTweetAnnotation_h */
