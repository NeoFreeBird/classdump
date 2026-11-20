//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNUserProfileSectionInfo_h
#define TFNUserProfileSectionInfo_h
@import Foundation;

@class NSObject;

@interface TFNUserProfileSectionInfo : NSObject

@property (readonly, copy, nonatomic) id /* block */ regexProvider;
@property (readonly, nonatomic) long long urlType;

/* instance methods */
- (id)initWithRegexProvider:(id /* block */)provider urlType:(long long)type;

@end

#endif /* TFNUserProfileSectionInfo_h */
