//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVAudienceListViewComponents_h
#define PTVAudienceListViewComponents_h
@import Foundation;

@class NSAttributedString, NSObject;

@interface PTVAudienceListViewComponents : NSObject

@property (nonatomic) struct CGSize { double x0; double x1; } textSize;
@property (nonatomic) struct CGSize { double x0; double x1; } suffixSize;
@property (retain, nonatomic) NSAttributedString *text;
@property (retain, nonatomic) NSAttributedString *suffix;

/* instance methods */

@end

#endif /* PTVAudienceListViewComponents_h */
