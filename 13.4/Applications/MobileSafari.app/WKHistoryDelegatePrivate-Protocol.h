//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL, WKNavigationData, WKWebView;

@protocol WKHistoryDelegatePrivate <NSObject>

@optional
- (void)_webView:(WKWebView *)arg1 didUpdateHistoryTitle:(NSString *)arg2 forURL:(NSURL *)arg3;
- (void)_webView:(WKWebView *)arg1 didPerformServerRedirectFromURL:(NSURL *)arg2 toURL:(NSURL *)arg3;
- (void)_webView:(WKWebView *)arg1 didPerformClientRedirectFromURL:(NSURL *)arg2 toURL:(NSURL *)arg3;
- (void)_webView:(WKWebView *)arg1 didNavigateWithNavigationData:(WKNavigationData *)arg2;
@end

