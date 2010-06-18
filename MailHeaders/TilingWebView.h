/*
 *     Generated by class-dump 3.2 (32 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "WebView.h"

@interface TilingWebView : WebView
{
    unsigned int _isAdjusting:1;
    unsigned int _disableSizeToFit:1;
    float _leftMargin;
    float _minHeight;
}

- (BOOL)disableSizeToFit;
- (void)setDisableSizeToFit:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1 frameName:(id)arg2 groupName:(id)arg3;
- (void)adjustForTilingView:(id)arg1 oldSize:(struct CGSize)arg2;
- (BOOL)createToDoUsing:(id)arg1;
- (void)sizeToFit;
- (float)minHeight;
- (void)setMinHeight:(float)arg1;
- (float)leftMargin;
- (void)setLeftMargin:(float)arg1;

@end
