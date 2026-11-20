//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC17TwitterTextEditor13LayoutManager_h
#define _TtC17TwitterTextEditor13LayoutManager_h
@import Foundation;

#include "NSLayoutManagerDelegate-Protocol.h"

@class NSLayoutManager, _$sSa -> TwitterTextEditor.LayoutManager.CacheableGlyphs;

@interface TwitterTextEditor.LayoutManager : NSLayoutManager <NSLayoutManagerDelegate> { // (Swift)
    /* instance variables */
    Swift.Array -> TwitterTextEditor.LayoutManager.CacheableGlyphs glyphsCache;
}

@property (nonatomic, retain) id <NSLayoutManagerDelegate> delegate;

/* instance methods */
- (long long)layoutManager:(id)manager shouldGenerateGlyphs:(const unsigned short *)glyphs properties:(const long long *)properties characterIndexes:(const long long *)indexes font:(id)font forGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)layoutManager:(id)manager didCompleteLayoutForTextContainer:(id)container atEnd:(_Bool)end;
- (long long)layoutManager:(id)manager shouldUseAction:(long long)action forControlCharacterAtIndex:(long long)index;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutManager:(id)manager boundingBoxForControlGlyphAtIndex:(long long)index forTextContainer:(id)container proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fragment glyphPosition:(struct CGPoint { double x0; double x1; })position characterIndex:(long long)index;
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)drawGlyphsForGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range atPoint:(struct CGPoint { double x0; double x1; })point;

@end

#endif /* _TtC17TwitterTextEditor13LayoutManager_h */
