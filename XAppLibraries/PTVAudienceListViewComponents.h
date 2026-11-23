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
