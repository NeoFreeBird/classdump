//
#ifndef _TtC9XArticles24ArticleTextLayoutManager_h
#define _TtC9XArticles24ArticleTextLayoutManager_h
@import Foundation;

#include "NSLayoutManagerDelegate-Protocol.h"

@class NSLayoutManager;

@interface XArticles.ArticleTextLayoutManager : NSLayoutManager <NSLayoutManagerDelegate> // (Swift)

/* instance methods */
- (_Bool)layoutManager:(id)manager shouldSetLineFragmentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)rect lineFragmentUsedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)rect baselineOffset:(double *)offset inTextContainer:(id)container forGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)drawBackgroundForGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range atPoint:(struct CGPoint { double x0; double x1; })point;

@end

#endif /* _TtC9XArticles24ArticleTextLayoutManager_h */
