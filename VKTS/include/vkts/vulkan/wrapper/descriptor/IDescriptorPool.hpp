/**
 * VKTS - VulKan ToolS.
 *
 * The MIT License (MIT)
 *
 * Copyright (c) since 2014 Norbert Nopper
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef VKTS_IDESCRIPTORPOOL_HPP_
#define VKTS_IDESCRIPTORPOOL_HPP_

#include <vkts/vulkan/wrapper/vkts_wrapper.hpp>

namespace vkts
{

class IDescriptorPool: public IDestroyable
{

public:

    IDescriptorPool() :
        IDestroyable()
    {
    }

    virtual ~IDescriptorPool()
    {
    }

    virtual const VkDevice getDevice() const = 0;

    virtual const VkDescriptorPoolCreateInfo* getDescriptorPoolCreateInfo() const = 0;

    virtual VkDescriptorPoolCreateFlags getFlags() const = 0;

    virtual uint32_t getMaxSets() const = 0;

    virtual uint32_t getPoolSizeCount() const = 0;

    virtual const VkDescriptorPoolSize* getPoolSizes() const = 0;

    virtual const VkDescriptorPool getDescriptorPool() const = 0;

    //
    // IDestroyable
    //

    virtual void destroy() = 0;

};

typedef std::shared_ptr<IDescriptorPool> IDescriptorPoolSP;

} /* namespace vkts */

#endif /* VKTS_IDESCRIPTORPOOL_HPP_ */
