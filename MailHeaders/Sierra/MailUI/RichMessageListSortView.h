//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSVisualEffectView.h"

@class CALayer, NSPopUpButton;

@interface RichMessageListSortView : NSVisualEffectView
{
    CALayer *_dividerLayer;	// 208 = 0xd0
    NSPopUpButton *_sortButton;	// 216 = 0xd8
    id _target;	// 224 = 0xe0
    SEL _clickAction;	// 232 = 0xe8
}

+ (id)_dividerColor;	// IMP=0x00000001000227d2
@property(nonatomic) SEL clickAction; // @synthesize clickAction=_clickAction;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(nonatomic) __weak NSPopUpButton *sortButton; // @synthesize sortButton=_sortButton;
@property(retain, nonatomic) CALayer *dividerLayer; // @synthesize dividerLayer=_dividerLayer;
- (void).cxx_destruct;	// IMP=0x0000000100286fe4
- (void)mouseDown:(id)arg1;	// IMP=0x0000000100286ecf
- (id)makeBackingLayer;	// IMP=0x0000000100022624
- (void)awakeFromNib;	// IMP=0x0000000100286ce4
- (void)_richMessageListSortViewCommonInit;	// IMP=0x0000000100286c9a
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100286c32
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100286bed

@end
