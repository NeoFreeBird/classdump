//
#ifndef _TtC12MarkdownView11A11YOptions_h
#define _TtC12MarkdownView11A11YOptions_h
@import Foundation;

#include "_TtP12MarkdownView18A11YOptionsExports_-Protocol.h"

@class NSObject, NSString, Swift.Bool, _$sSS, _$sSd;

@interface MarkdownView.A11YOptions : NSObject <MarkdownView.A11YOptionsExports> // (Swift)

@property (nonatomic) _Bool speech;
@property (nonatomic) _Bool braille;
@property (nonatomic) _Bool subtitles;
@property (nonatomic) _Bool viewBraille;
@property (nonatomic, copy) NSString *backgroundColor;
@property (nonatomic) double backgroundOpacity;
@property (nonatomic, copy) NSString *foregroundColor;
@property (nonatomic) double foregroundOpacity;
@property (nonatomic, copy) NSString *highlight;
@property (nonatomic) _Bool flame;
@property (nonatomic) _Bool hover;
@property (nonatomic) _Bool treeColoring;
@property (nonatomic, copy) NSString *magnification;
@property (nonatomic, copy) NSString *magnify;
@property (nonatomic) _Bool keyMagnifier;
@property (nonatomic) _Bool mouseMagnifier;
@property (nonatomic, copy) NSString *align;
@property (nonatomic) _Bool infoType;
@property (nonatomic) _Bool infoRole;
@property (nonatomic) _Bool infoPrefix;

/* instance methods */
- (id)init;

@end

#endif /* _TtC12MarkdownView11A11YOptions_h */
