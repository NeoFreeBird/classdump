//
#ifndef TCRComposerGlassHeaderPost_h
#define TCRComposerGlassHeaderPost_h
@import Foundation;

@class NSObject;

@interface TCRComposerGlassHeaderPost : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 title;
    @40@0:8:16@24@32 availability;
}

@property (nonatomic, readonly) long long hash;

/* instance methods */
- (id)initWithTitle:(id)title availability:(long long)availability;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TCRComposerGlassHeaderPost_h */
