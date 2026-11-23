//
#ifndef PTVBroadcastEditView_h
#define PTVBroadcastEditView_h
@import Foundation;

#include "PTVBroadcastEditStartPointSectionView.h"
#include "PTVBroadcastEditStartPointSectionViewDelegate-Protocol.h"
#include "PTVBroadcastEditThumbnailSectionView.h"
#include "PTVBroadcastEditThumbnailSectionViewDelegate-Protocol.h"
#include "PTVBroadcastEditTitleView.h"
#include "PTVBroadcastEditTitleViewDelegate-Protocol.h"
#include "PTVBroadcastEditViewDelegate-Protocol.h"
#include "PTVBroadcastOverflowScrollStackContainerView.h"
#include "PTVBroadcastOverflowScrollStackContainerViewDelegate-Protocol.h"

@class NSArray, NSString, UITapGestureRecognizer, UIView;

@interface PTVBroadcastEditView : UIView <PTVBroadcastEditStartPointSectionViewDelegate, PTVBroadcastEditTitleViewDelegate, PTVBroadcastEditThumbnailSectionViewDelegate, PTVBroadcastOverflowScrollStackContainerViewDelegate>

@property (readonly, nonatomic) PTVBroadcastOverflowScrollStackContainerView *scrollStackView;
@property (readonly, nonatomic) PTVBroadcastEditThumbnailSectionView *thumbnailPreviewScrubbingView;
@property (readonly, nonatomic) PTVBroadcastEditStartPointSectionView *startPointPreviewScrubbingView;
@property (readonly, weak, nonatomic) id <PTVBroadcastEditViewDelegate> delegate;
@property (readonly, nonatomic) PTVBroadcastEditTitleView *editTitleView;
@property (readonly, nonatomic) UITapGestureRecognizer *dismissKeyboardGestureRecognizer;
@property (readonly, nonatomic) double thumbnailCurrentTime;
@property (readonly, nonatomic) double startPointCurrentTime;
@property (readonly, nonatomic) NSString *currentTitle;
@property (readonly, nonatomic) NSArray *currentTopics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDelegate:(id)delegate viewModel:(id)model;
- (void)broadcastEditThumbnailSectionViewDidUpdateTime:(id)time;
- (void)broadcastEditStartPointSectionViewDidUpdateTime:(id)time;
- (void)endEditingTitle;
- (void)broadcastOverflowScrollStackContainerViewWillBeginDragging:(id)dragging;
- (void)broadcastEditTitleViewDidBeginEditingTitle:(id)title;
- (void)broadcastEditTitleViewDidEditTitle:(id)title;
- (void)broadcastEditTitleViewDidEndEditingTitle:(id)title;

@end

#endif /* PTVBroadcastEditView_h */
