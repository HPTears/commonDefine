//
//  XKComponentNotification.h
//  XKComponentBaseProject
//
//  Created by Jamesholy on 2019/3/11.
//  Copyright © 2019 Jamesholy. All rights reserved.
//

#ifndef XKComponentNotification_h
#define XKComponentNotification_h


static NSString *const XKSecretFriendListInfoChangeNoti = @"XKSecretFriendListInfoChangeNoti";                                      //密友列表信息变化 加了密友/备注/删除/等请发这个通知
static NSString *const XKFriendListInfoChangeNoti = @"XKFriendListInfoChangeNoti";                                      // 可友信息列表变化 加了好友/备注/删除/等请发这个通知

static NSString *const XKSecretFriendListCacheChangeNoti = @"XKSecretFriendListCacheChangeNoti";                                      //密友缓存发生改变
static NSString *const XKFriendListCacheChangeNoti = @"XKFriendListCacheChangeNoti";                                      //好友缓存发生改变
static NSString *const XKUserCacheChangeNoti = @"XKUserCacheChangeNoti";                                      //relatetionUser缓存发生改变

#pragma mark - 刷新相关
static NSString *const XKIMBaseChatViewControllrtRefreshViewNotification = @"XKIMBaseChatViewControllrtRefreshViewNotification";                                            //刷新baseChatVC视图

#pragma mark - 音频相关
// IM开始播放音频
static NSString *const XKIMStartPlayAudioNotification = @"XKIMStartPlayAudioNotification";
// IM停止播放音频
static NSString *const XKIMStopPlayAudioNotification = @"XKIMStopPlayAudioNotification";

#endif /* XKComponentNotification_h */
