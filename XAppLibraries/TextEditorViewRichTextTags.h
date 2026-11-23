//
#ifndef TextEditorViewRichTextTags_h
#define TextEditorViewRichTextTags_h
@import Foundation;

@class NSArray, NSObject;

@interface TextEditorViewRichTextTags : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 types;
}

@property (nonatomic, readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;
@property (nonatomic, readonly) NSArray *wrappedTypes;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TextEditorViewRichTextTags_h */
