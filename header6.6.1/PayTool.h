//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PayTool : NSObject
{
}

+ (void)finishTransactions:(id)arg1 operation:(id)arg2;
+ (_Bool)isRiskError:(long long)arg1;
+ (void)finishTransaction:(id)arg1 orderInfo:(id)arg2 userInfo:(id)arg3;
+ (id)constructIapProvideDict:(id)arg1;
+ (id)getH5ChannelPagePathByOrderInfo:(id)arg1 userInfo:(id)arg2 landscape:(_Bool)arg3;
+ (id)getH5ResultPagePathByOrderInfo:(id)arg1 userInfo:(id)arg2 withgameName:(id)arg3 withMpJson:(id)arg4 withProductListJson:(id)arg5 landscape:(_Bool)arg6;
+ (id)getH5Host;
+ (void)releaseInstance;
+ (id)singleton;
- (void)dealloc;

@end

