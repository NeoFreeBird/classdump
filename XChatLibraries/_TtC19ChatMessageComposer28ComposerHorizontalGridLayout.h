//
#ifndef _TtC19ChatMessageComposer28ComposerHorizontalGridLayout_h
#define _TtC19ChatMessageComposer28ComposerHorizontalGridLayout_h
@import Foundation;

@class UICollectionViewCompositionalLayout;

@interface ChatMessageComposer.ComposerHorizontalGridLayout : UICollectionViewCompositionalLayout // (Swift)

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithSection:(id)section;
- (id)initWithSection:(id)section configuration:(id)configuration;
- (id)initWithSectionProvider:(id /* block */)provider;
- (id)initWithSectionProvider:(id /* block */)provider configuration:(id)configuration;

@end

#endif /* _TtC19ChatMessageComposer28ComposerHorizontalGridLayout_h */
