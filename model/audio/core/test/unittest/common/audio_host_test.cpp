/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
 *
 * HDF is dual licensed: you can use it either under the terms of
 * the GPL, or the BSD license, at your option.
 * See the LICENSE file in the root of this repository for complete details.
 */

#include "audio_common_test.h"
#include <gtest/gtest.h>
#include "hdf_uhdf_test.h"

using namespace testing::ext;

class AudioHostTest : public testing::Test {
public:
    static void SetUpTestCase();
    static void TearDownTestCase();
    void SetUp();
    void TearDown();
};

void AudioHostTest::SetUpTestCase()
{
    HdfTestOpenService();
}

void AudioHostTest::TearDownTestCase()
{
    HdfTestCloseService();
}

void AudioHostTest::SetUp()
{
}

void AudioHostTest::TearDown()
{
}

HWTEST_F(AudioHostTest, AudioHostTest_GetCodec, TestSize.Level0)
{
    struct HdfTestMsg msg = {g_testAudioType, TESTGETCODEC, -1};
    EXPECT_EQ(0, HdfTestSendMsgToService(&msg));
}

HWTEST_F(AudioHostTest, AudioHostTest_GetAudioServiceName, TestSize.Level0)
{
    struct HdfTestMsg msg = {g_testAudioType, TESTGETCARDINSTANCE, -1};
    EXPECT_EQ(0, HdfTestSendMsgToService(&msg));
}
