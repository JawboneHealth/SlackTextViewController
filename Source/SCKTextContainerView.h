//
//  SCKTextContainerView.h
//  SlackChatKit
//
//  Created by Ignacio Romero Z. on 8/16/14.
//  Copyright (c) 2014 Tiny Speck, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SCKTextView.h"

#define kTextViewVerticalPadding 5
#define kTextViewHorizontalPadding 8

extern NSString * const SCKInputAccessoryViewKeyboardFrameDidChangeNotification;

@interface SCKTextContainerView : UIToolbar

/** The centered text view. */
@property (nonatomic, strong) SCKTextView *textView;
/** The left action button action. */
@property (nonatomic, strong) UIButton *leftButton;
/** The right action button action. */
@property (nonatomic, strong) UIButton *rightButton;
/** YES if the right button should be hidden animatedly in case the text view has no text in it. YES by default. */
@property (nonatomic) BOOL autoHideRightButton;
/** The minimum height of the view. Relies on the intrinsicContentSize values. */
@property (nonatomic, readonly) CGFloat minHeight;
/** The maximum height of the view. Relies on maximum amount of lines of the textView. */
@property (nonatomic, readonly) CGFloat maxHeight;

@end