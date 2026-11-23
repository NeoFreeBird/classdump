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
